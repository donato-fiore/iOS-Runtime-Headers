// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENNOTEBOOK_H
#define ENNOTEBOOK_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "EDAMLinkedNotebook.h"
#import "EDAMNotebook.h"
#import "EDAMSharedNotebook.h"

@interface ENNotebook : NSObject <NSCoding>



@property (readonly, nonatomic) BOOL allowsWriting;
@property (readonly, nonatomic) BOOL isBusinessNotebook;
@property (readonly, nonatomic) BOOL isDefaultNotebook;
@property (nonatomic) BOOL isDefaultNotebookOverride; // ivar: _isDefaultNotebookOverride
@property (readonly, nonatomic) BOOL isJoinedPublic;
@property (readonly, nonatomic) BOOL isJoinedShared;
@property (readonly, nonatomic) BOOL isOwnPublic;
@property (readonly, nonatomic) BOOL isOwnShared;
@property (readonly, nonatomic) BOOL isOwnedByUser;
@property (readonly, nonatomic) BOOL isPublic;
@property (nonatomic) BOOL isShared; // ivar: _isShared
@property (retain, nonatomic) EDAMLinkedNotebook *linkedNotebook; // ivar: _linkedNotebook
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) EDAMNotebook *notebook; // ivar: _notebook
@property (readonly, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) EDAMSharedNotebook *sharedNotebook; // ivar: _sharedNotebook


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLinked;
-(NSUInteger)hash;
-(id)description;
-(id)guid;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotebook:(id)arg0 ;
-(id)initWithNotebook:(id)arg0 linkedNotebook:(id)arg1 sharedNotebook:(id)arg2 ;
-(id)initWithPublicNotebook:(id)arg0 forLinkedNotebook:(id)arg1 ;
-(id)initWithSharedNotebook:(id)arg0 forLinkedNotebook:(id)arg1 ;
-(id)initWithSharedNotebook:(id)arg0 forLinkedNotebook:(id)arg1 withBusinessNotebook:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif