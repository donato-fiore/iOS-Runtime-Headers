// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC13SOFTPOSREADER12CONFIGURATOR22DEFAULTINSTALLDELEGATE_H
#define _TTCC13SOFTPOSREADER12CONFIGURATOR22DEFAULTINSTALLDELEGATE_H

@class SwiftObject;
@protocol SPRInstallDelegate;



@interface _TtCC13SoftPosReader12Configurator22DefaultInstallDelegate : SwiftObject <SPRInstallDelegate>

 {
    ? closure;
}




-(void)onFailureWithError:(id)arg0 ;
-(void)onSuccessWithInstallData:(id)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 progress:(NSInteger)arg1 ;


@end


#endif