// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15PROXIMITYREADERP33_C726A94082B9A7EC0BB4B38CD2C57F0C17SPRINSTALLWRAPPER_H
#define _TTC15PROXIMITYREADERP33_C726A94082B9A7EC0BB4B38CD2C57F0C17SPRINSTALLWRAPPER_H

@class SwiftObject;
@protocol SPRInstallDelegate;



@interface _TtC15ProximityReaderP33_C726A94082B9A7EC0BB4B38CD2C57F0C17SPRInstallWrapper : SwiftObject <SPRInstallDelegate>

 {
    ? progressInstallListener;
    ? installCompletion;
}




-(void)onFailureWithError:(id)arg0 ;
-(void)onSuccessWithInstallData:(id)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 progress:(NSInteger)arg1 ;


@end


#endif