// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMARKNOTIFICATIONSREADOPERATIONINFO_H
#define CKMARKNOTIFICATIONSREADOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKOperationInfo.h"

@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *notificationIDs; // ivar: _notificationIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif