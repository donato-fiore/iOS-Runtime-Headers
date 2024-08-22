// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSWLKAPPINSTALLATIONOPERATION_H
#define VSWLKAPPINSTALLATIONOPERATION_H

@class VSAsyncOperation, NSString, VSOptional;



@interface VSWLKAppInstallationOperation : VSAsyncOperation

@property (retain, nonatomic) NSString *appAdamID; // ivar: _appAdamID
@property (retain, nonatomic) id *installable; // ivar: _installable
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(void)executionDidBegin;


@end


#endif