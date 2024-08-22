// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASPASSWORDMODEDATA_H
#define ICASPASSWORDMODEDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASEndMode.h"
#import "ICASPwdModeChangeContextPath.h"
#import "ICASStartMode.h"

@interface ICASPasswordModeData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASEndMode *endMode; // ivar: _endMode
@property (readonly, nonatomic) ICASPwdModeChangeContextPath *pwdModeChangeContextPath; // ivar: _pwdModeChangeContextPath
@property (readonly, nonatomic) ICASStartMode *startMode; // ivar: _startMode


+(id)dataName;
-(id)initWithPwdModeChangeContextPath:(id)arg0 startMode:(id)arg1 endMode:(id)arg2 ;
-(id)toDict;


@end


#endif