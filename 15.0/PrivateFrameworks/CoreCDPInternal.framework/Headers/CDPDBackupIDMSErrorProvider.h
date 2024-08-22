// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDBACKUPIDMSERRORPROVIDER_H
#define CDPDBACKUPIDMSERRORPROVIDER_H



#import "CDPDBackupErrorProviderImpl.h"

@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl



-(BOOL)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg0 ;
-(id)globalHardLimitError;
-(id)globalHardLimitErrorWithRecord:(id)arg0 ;
-(id)hardLimitErrorForRecord:(id)arg0 ;
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg0 ;
-(void)handleHardLimitError:(id)arg0 completion:(id)arg1 ;
-(void)handleSoftLimitError:(id)arg0 completion:(id)arg1 ;


@end


#endif