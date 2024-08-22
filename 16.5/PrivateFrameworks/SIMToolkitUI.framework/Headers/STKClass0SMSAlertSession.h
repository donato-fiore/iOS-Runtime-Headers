// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKCLASS0SMSALERTSESSION_H
#define STKCLASS0SMSALERTSESSION_H



#import "STKAlertSession.h"

@interface STKClass0SMSAlertSession : STKAlertSession

@property (readonly, nonatomic) NSInteger slot; // ivar: _slot


+(BOOL)_requiresResponseProvider;
-(id)initWithLogger:(id)arg0 responseProvider:(id)arg1 options:(id)arg2 sound:(id)arg3 ;
-(id)initWithLogger:(id)arg0 responseProvider:(id)arg1 options:(id)arg2 sound:(id)arg3 slot:(NSInteger)arg4 ;


@end


#endif