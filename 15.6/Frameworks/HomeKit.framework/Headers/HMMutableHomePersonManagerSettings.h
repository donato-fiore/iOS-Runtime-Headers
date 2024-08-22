// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLEHOMEPERSONMANAGERSETTINGS_H
#define HMMUTABLEHOMEPERSONMANAGERSETTINGS_H



#import "HMHomePersonManagerSettings.h"

@interface HMMutableHomePersonManagerSettings : HMHomePersonManagerSettings

@property (getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif