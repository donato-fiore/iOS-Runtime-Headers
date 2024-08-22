// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFACESUGGESTIONFEATUREDCONFIDENCESIGNAL_H
#define ATXFACESUGGESTIONFEATUREDCONFIDENCESIGNAL_H

@class NSString;
@protocol ATXFaceSuggestionSignal;

#import <Foundation/Foundation.h>


@interface ATXFaceSuggestionFeaturedConfidenceSignal : NSObject <ATXFaceSuggestionSignal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat weight;


-(CGFloat)valueForDescriptor:(id)arg0 ;


@end


#endif