// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIIMAGETREATMENTOPTIONS_H
#define PBUIIMAGETREATMENTOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PBUIImageTreatmentOptions : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat originalScale; // ivar: _originalScale
@property (readonly, nonatomic) CGFloat reducedScale; // ivar: _reducedScale
@property (readonly, nonatomic) CGFloat scaleReductionFactor;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif