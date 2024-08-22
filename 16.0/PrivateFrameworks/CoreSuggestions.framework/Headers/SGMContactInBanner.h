// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMCONTACTINBANNER_H
#define SGMCONTACTINBANNER_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactInBanner : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 app:(struct SGMBannerDisplayApp_ )arg1 extracted:(struct SGMBannerExtractionType_ )arg2 selfId:(struct SGMTypeSafeBool_ )arg3 extractionModelVersion:(NSUInteger)arg4 contactDetail:(struct SGMContactDetailType_ )arg5 ;


@end


#endif