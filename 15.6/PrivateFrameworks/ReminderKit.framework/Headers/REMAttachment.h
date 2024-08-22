// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMATTACHMENT_H
#define REMATTACHMENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying, REMObjectIDProviding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMAttachment : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding>



@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMObjectID *reminderID; // ivar: _reminderID
@property (readonly, nonatomic) NSString *uti; // ivar: _uti


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttachment:(id)arg0 objectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 UTI:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif