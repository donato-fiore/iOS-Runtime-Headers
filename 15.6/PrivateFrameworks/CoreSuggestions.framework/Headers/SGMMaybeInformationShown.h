// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMMAYBEINFORMATIONSHOWN_H
#define SGMMAYBEINFORMATIONSHOWN_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMMaybeInformationShown : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 extracted:(struct SGMBannerExtractionType_ )arg1 extractionModelVersion:(NSUInteger)arg2 ;


@end


#endif