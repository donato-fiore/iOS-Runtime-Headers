// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHAPPPREDICTIONSELEMENT_H
#define SBHAPPPREDICTIONSELEMENT_H



#import "SBHCustomIconElement.h"

@interface SBHAppPredictionsElement : SBHCustomIconElement



+(id)elementIdentifier;
-(BOOL)iconShouldIgnoreOtherDataSources:(id)arg0 ;
-(NSUInteger)supportedGridSizeClassesForIcon:(id)arg0 ;
-(id)displayName;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;


@end


#endif