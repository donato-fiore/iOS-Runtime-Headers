// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DNDSPENDINGMESSAGERECIPIENTS_H
#define _DNDSPENDINGMESSAGERECIPIENTS_H

@class NSSet, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _DNDSPendingMessageRecipients : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSSet *deviceIdentifiers; // ivar: _deviceIdentifiers
@property (readonly, copy, nonatomic) NSDate *lastUpdateDate; // ivar: _lastUpdateDate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLastUpdateDate:(id)arg0 deviceIdentifiers:(id)arg1 ;


@end


#endif