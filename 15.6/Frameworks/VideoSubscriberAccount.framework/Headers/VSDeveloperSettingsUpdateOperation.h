// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSDEVELOPERSETTINGSUPDATEOPERATION_H
#define VSDEVELOPERSETTINGSUPDATEOPERATION_H



#import "VSAsyncOperation.h"
#import "VSDeveloperServiceConnection.h"
#import "VSOptional.h"
#import "VSDeveloperSettings.h"

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation

@property (retain, nonatomic) VSDeveloperServiceConnection *connection; // ivar: _connection
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (copy, nonatomic) VSDeveloperSettings *settings; // ivar: _settings


-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)executionDidBegin;


@end


#endif