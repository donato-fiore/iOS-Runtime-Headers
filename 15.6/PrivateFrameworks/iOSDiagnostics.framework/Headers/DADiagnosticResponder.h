// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADIAGNOSTICRESPONDER_H
#define DADIAGNOSTICRESPONDER_H

@class NSString;
@protocol DKBrightnessResponder, DKVolumeHUDResponder;

#import <Foundation/Foundation.h>


@interface DADiagnosticResponder : NSObject <DKBrightnessResponder, DKVolumeHUDResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)enableVolumeHUD:(BOOL)arg0 ;
-(void)setScreenToBrightness:(float)arg0 animate:(BOOL)arg1 ;


@end


#endif