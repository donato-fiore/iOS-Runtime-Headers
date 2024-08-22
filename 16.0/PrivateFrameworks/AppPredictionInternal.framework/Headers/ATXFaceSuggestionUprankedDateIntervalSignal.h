// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFACESUGGESTIONUPRANKEDDATEINTERVALSIGNAL_H
#define ATXFACESUGGESTIONUPRANKEDDATEINTERVALSIGNAL_H

@class NSDictionary, NSString;
@protocol ATXFaceSuggestionSignal;

#import <Foundation/Foundation.h>


@interface ATXFaceSuggestionUprankedDateIntervalSignal : NSObject <ATXFaceSuggestionSignal>

 {
    NSDictionary *_uprankedDateIntervals;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat weight;


-(CGFloat)valueForDescriptor:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;


@end


#endif