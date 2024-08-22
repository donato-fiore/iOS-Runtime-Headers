// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSDEVELOPERSETTINGSFETCHOPERATION_H
#define VSDEVELOPERSETTINGSFETCHOPERATION_H



#import "VSAsyncOperation.h"
#import "VSDeveloperServiceConnection.h"
#import "VSOptional.h"

@interface VSDeveloperSettingsFetchOperation : VSAsyncOperation

@property (retain, nonatomic) VSDeveloperServiceConnection *connection; // ivar: _connection
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)init;
-(void)executionDidBegin;


@end


#endif