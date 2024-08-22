// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FINODE_H
#define FINODE_H

@class BRContainer, NSNumber, NSDate, UTType, NSString, NSError, NSURL, FPProviderDomain, FPItem, NSArray, NSPersonNameComponents;
@protocol FINodeProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "FINode.h"

@interface FINode : NSObject <FINodeProtocol, NSCopying>



@property (readonly, copy, nonatomic) BRContainer *brContainer;
@property (readonly, copy, nonatomic) FINode *brContainerDocuments;
@property (readonly, nonatomic) NSNumber *childItemCount;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, nonatomic) NSError *enumeratorError;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) FPProviderDomain *fpDomain;
@property (readonly, copy, nonatomic) FPItem *fpItem;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedByCurrentUser;
@property (readonly, nonatomic) BOOL isTopLevelSharedItem;
@property (readonly, nonatomic) BOOL isTrashed;
@property (readonly, nonatomic) NSArray *itemDecorations;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, nonatomic) FINode *parent;
@property (readonly, copy, nonatomic) NSArray *tags;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;


+(id)_allInstances;
+(id)_allRootInstances;
+(id)dataSeparatedICloudDefaultContainer;
+(id)dataSeparatedICloudLibrariesContainer;
+(id)fiNodeFromURL:(id)arg0 ;
+(id)iCloudDefaultContainer;
+(id)iCloudLibrariesContainer;
+(id)nodeFromNodeRef:(struct OpaqueNodeRef *)arg0 ;
+(id)providerDomainsContainer;
+(id)sizeFolder:(id)arg0 ;
+(id)sizeFolder:(id)arg0 forCopyInto:(id)arg1 withDelegate:(id)arg2 ;
+(int)desktopServicesAPIVersion;
+(void)_forEachNodeDeep:(id)arg0 ;
+(void)end;
+(void)start;
-(*void)asTNode;
-(BOOL)propertyAsBool:(unsigned int)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)nodeIs:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchLastUsedDate:(BOOL)arg0 ;
-(id)fetchTags:(BOOL)arg0 ;
-(id)longDescription;
-(id)mutableCopy;
-(id)original;
-(id)propertyAsArray:(unsigned int)arg0 ;
-(id)propertyAsDate:(unsigned int)arg0 ;
-(id)propertyAsDictionary:(unsigned int)arg0 ;
-(id)propertyAsNSObject:(unsigned int)arg0 ;
-(id)propertyAsNumber:(unsigned int)arg0 ;
-(id)propertyAsString:(unsigned int)arg0 ;
-(struct OpaqueNodeRef *)nodeRef;
-(struct shared_ptr<TFSInfo> )fsInfo;
-(unsigned int)nodePermissions:(unsigned int)arg0 ;
-(void)_forEachNodeDeep:(id)arg0 ;
-(void)inlineProgressCancel;


@end


#endif