// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AVTADAPTIVEFULLSIZELAYOUT_H
#define _AVTADAPTIVEFULLSIZELAYOUT_H

@class NSString;
@protocol AVTAdaptativeLayout;

#import <Foundation/Foundation.h>


@interface _AVTAdaptiveFullSizeLayout : NSObject <AVTAdaptativeLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct CGSize )contentViewSizeForSize:(struct CGSize )arg0 ;


@end


#endif