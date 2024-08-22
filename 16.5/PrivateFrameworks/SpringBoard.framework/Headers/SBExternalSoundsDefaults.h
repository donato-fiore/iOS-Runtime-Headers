// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALSOUNDSDEFAULTS_H
#define SBEXTERNALSOUNDSDEFAULTS_H

@class BSAbstractDefaultDomain;



@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL buttonsCanChangeRingerVolume;
@property (nonatomic) BOOL keyboardPlaysSounds;
@property (nonatomic) BOOL systemHapticsEnabled;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif