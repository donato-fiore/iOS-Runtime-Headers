// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HFHOMEKITSETTINGSVENDORSETTINGSWRITEVALUETRANSACTION_H
#define _HFHOMEKITSETTINGSVENDORSETTINGSWRITEVALUETRANSACTION_H

@class NSError, HMSetting, NAFuture, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface _HFHomeKitSettingsVendorSettingsWriteValueTransaction : NSObject

@property (readonly, nonatomic) NSUInteger changeType; // ivar: _changeType
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) id *previousValue; // ivar: _previousValue
@property (readonly, nonatomic) HMSetting *setting; // ivar: _setting
@property (retain, nonatomic) NAFuture *settingWriteFuture; // ivar: _settingWriteFuture
@property (nonatomic, getter=hasStarted) BOOL started; // ivar: _started
@property (readonly, nonatomic) NSNumber *transactionNumber; // ivar: _transactionNumber
@property (readonly, nonatomic) NSDate *transactionStartDate; // ivar: _transactionStartDate
@property (readonly, copy, nonatomic) id *value; // ivar: _value


-(id)description;
-(id)descriptionBuilder;
-(id)init;
-(id)initWithSetting:(id)arg0 previousValue:(id)arg1 value:(id)arg2 changeType:(NSUInteger)arg3 ;


@end


#endif