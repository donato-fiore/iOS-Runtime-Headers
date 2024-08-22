// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSEGMENTEDCONTROLTARGET_H
#define _TVSEGMENTEDCONTROLTARGET_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _TVSegmentedControlTarget : NSObject {
    NSArray *_elements;
}




+(void)addTargetInSegmentedControl:(id)arg0 withHighlightViewElements:(id)arg1 ;
-(id)initWithViewElements:(id)arg0 ;
-(void)_valueChanged:(id)arg0 ;


@end


#endif