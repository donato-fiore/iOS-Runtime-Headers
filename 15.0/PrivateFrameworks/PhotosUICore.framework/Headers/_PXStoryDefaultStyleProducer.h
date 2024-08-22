// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYDEFAULTSTYLEPRODUCER_H
#define _PXSTORYDEFAULTSTYLEPRODUCER_H

@protocol PXStoryStyleProducer;

#import <Foundation/Foundation.h>


@interface _PXStoryDefaultStyleProducer : NSObject <PXStoryStyleProducer>

 {
    BOOL _thumbnailOnly;
}




-(id)initWithConfigurationOptions:(NSUInteger)arg0 ;
-(id)styleWithCustomColorGradeKind:(NSInteger)arg0 originalColorGradeCategory:(id)arg1 songResource:(id)arg2 cueSource:(id)arg3 autoEditDecisionList:(id)arg4 styleOptions:(struct ? )arg5 isCustomized:(BOOL)arg6 ;


@end


#endif