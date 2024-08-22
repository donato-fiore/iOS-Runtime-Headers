// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACESUGGESTIONCONFIGUREDHOMESCREENWIDGETSIGNAL_H
#define ATXFACESUGGESTIONCONFIGUREDHOMESCREENWIDGETSIGNAL_H

@class NSMutableSet, NSString;
@protocol ATXFaceSuggestionSignal;

#import <Foundation/Foundation.h>


@interface ATXFaceSuggestionConfiguredHomeScreenWidgetSignal : NSObject <ATXFaceSuggestionSignal>

 {
    NSMutableSet *_configuredWidgetContainerBundleIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat weight;


-(CGFloat)valueForDescriptor:(id)arg0 ;
-(id)init;
-(void)_prepare;


@end


#endif