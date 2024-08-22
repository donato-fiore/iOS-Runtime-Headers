// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFEATURES_H
#define SXFEATURES_H

@class NSString;
@protocol SXFeatures;

#import <Foundation/Foundation.h>


@interface SXFeatures : NSObject <SXFeatures>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL newAdsEnabled; // ivar: _newAdsEnabled
@property (readonly) Class superclass;


-(id)initWithNewAdsEnabled:(BOOL)arg0 ;


@end


#endif