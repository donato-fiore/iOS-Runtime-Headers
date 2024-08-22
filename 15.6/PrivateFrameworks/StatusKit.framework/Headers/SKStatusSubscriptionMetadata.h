// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSTATUSSUBSCRIPTIONMETADATA_H
#define SKSTATUSSUBSCRIPTIONMETADATA_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKPublishedStatus.h"

@interface SKStatusSubscriptionMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) SKPublishedStatus *currentStatus; // ivar: _currentStatus
@property (readonly, nonatomic) NSArray *ownerHandles; // ivar: _ownerHandles
@property (readonly, nonatomic, getter=isPersonalStatusSubscription) BOOL personalStatusSubscription; // ivar: _personalStatusSubscription
@property (readonly, nonatomic) NSString *statusTypeIdentifier; // ivar: _statusTypeIdentifier
@property (readonly, nonatomic) NSString *subscriptionIdentifier; // ivar: _subscriptionIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 isPersonalStatusSubscription:(BOOL)arg2 currentStatus:(id)arg3 ownerHandles:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif