// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMCHANGETOMBSTONE_H
#define REMCHANGETOMBSTONE_H

@class NSUUID, NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMChangeTombstone : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *assignmentOwningReminderIdentifier; // ivar: _assignmentOwningReminderIdentifier
@property (readonly, nonatomic) NSNumber *daIsEventOnlyContainer; // ivar: _daIsEventOnlyContainer
@property (readonly, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly, nonatomic) NSString *hashtagName; // ivar: _hashtagName
@property (readonly, nonatomic) NSUUID *hashtagReminderIdentifier; // ivar: _hashtagReminderIdentifier
@property (readonly, nonatomic) NSUUID *objectIdentifier; // ivar: _objectIdentifier
@property (readonly, nonatomic) NSString *shareeAddress; // ivar: _shareeAddress
@property (readonly, nonatomic) NSString *shareeDisplayName; // ivar: _shareeDisplayName
@property (readonly, nonatomic) NSUUID *shareeOwningListIdentifier; // ivar: _shareeOwningListIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif