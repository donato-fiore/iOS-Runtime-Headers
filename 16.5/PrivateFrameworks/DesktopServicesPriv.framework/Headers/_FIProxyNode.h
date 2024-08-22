// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FIPROXYNODE_H
#define _FIPROXYNODE_H



#import "FICustomNode.h"
#import "FINode.h"

@interface _FIProxyNode : FICustomNode

@property (readonly, nonatomic) FINode *proxyNode; // ivar: _proxyNode


-(BOOL)isFolder;
-(BOOL)isPackage;
-(BOOL)isShared;
-(BOOL)isSharedByCurrentUser;
-(BOOL)isTopLevelSharedItem;
-(BOOL)isTrashed;
-(BOOL)propertyAsBool:(unsigned int)arg0 ;
-(BOOL)requiresForcedSyncing;
-(NSUInteger)nodeIs:(NSUInteger)arg0 ;
-(id)childItemCount;
-(id)contentModificationDate;
-(id)contentType;
-(id)creationDate;
-(id)debugDescription;
-(id)displayName;
-(id)documentSize;
-(id)enumeratorError;
-(id)fetchLastUsedDate:(BOOL)arg0 ;
-(id)fetchTags:(BOOL)arg0 ;
-(id)fileName;
-(id)fileURL;
-(id)fpDomain;
-(id)fpItem;
-(id)initWithProxyNode:(id)arg0 ;
-(id)itemDecorations;
-(id)itemIdentifier;
-(id)iteratorIncludingInvisibleItems:(BOOL)arg0 synchronous:(BOOL)arg1 ;
-(id)lastUsedDate;
-(id)ownerNameComponents;
-(id)propertyAsArray:(unsigned int)arg0 ;
-(id)propertyAsDate:(unsigned int)arg0 ;
-(id)propertyAsDictionary:(unsigned int)arg0 ;
-(id)propertyAsNSObject:(unsigned int)arg0 ;
-(id)propertyAsNumber:(unsigned int)arg0 ;
-(id)propertyAsString:(unsigned int)arg0 ;
-(id)source;
-(id)tags;
-(id)typeIdentifier;
-(unsigned int)nodePermissions:(unsigned int)arg0 ;
-(unsigned int)volumeIs:(unsigned int)arg0 ;
-(void)inlineProgressCancel;


@end


#endif