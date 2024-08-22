// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFACESUGGESTIONCONFIGUREDWATCHFACESIGNAL_H
#define ATXFACESUGGESTIONCONFIGUREDWATCHFACESIGNAL_H

@class NSArray, NSString;
@protocol ATXFaceSuggestionSignal;

#import <Foundation/Foundation.h>


@interface ATXFaceSuggestionConfiguredWatchFaceSignal : NSObject <ATXFaceSuggestionSignal>

 {
    NSArray *_watchFaces;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat weight;


-(CGFloat)valueForDescriptor:(id)arg0 ;
-(id)init;


@end


#endif