// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRECOMMENDATIONMODULE_H
#define MTRECOMMENDATIONMODULE_H

@class NSString;
@protocol _TtP18PodcastsFoundation11MediaObject_;

#import <Foundation/Foundation.h>

#import "MTRecommendationModuleAttributes.h"

@interface MTRecommendationModule : NSObject <_TtP18PodcastsFoundation11MediaObject_>

 {
    ? id;
    ? type;
    ? shows;
    ? episodes;
}


@property (nonatomic, readonly) MTRecommendationModuleAttributes *attributes; // ivar: attributes
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;




@end


#endif