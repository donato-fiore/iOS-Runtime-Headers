// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMPSRANDOMPADAUGMENTER_H
#define TCMPSRANDOMPADAUGMENTER_H

@class NSString;
@protocol TCMPSImageAugmenting;

#import <Foundation/Foundation.h>


@interface TCMPSRandomPadAugmenter : NSObject <TCMPSImageAugmenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxAreaFraction; // ivar: _maxAreaFraction
@property (nonatomic) CGFloat maxAspectRatio; // ivar: _maxAspectRatio
@property (nonatomic) NSUInteger maxAttempts; // ivar: _maxAttempts
@property (nonatomic) CGFloat minAreaFraction; // ivar: _minAreaFraction
@property (nonatomic) CGFloat minAspectRatio; // ivar: _minAspectRatio
@property (nonatomic) CGFloat skipProbability; // ivar: _skipProbability
@property (readonly) Class superclass;


-(id)imageAugmentedFromImage:(id)arg0 generator:(id)arg1 ;
-(id)init;


@end


#endif