// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16AXMEDIAUTILITIES24AXMELEMENTDETECTORRESULT_H
#define _TTC16AXMEDIAUTILITIES24AXMELEMENTDETECTORRESULT_H


#import <Foundation/Foundation.h>


@interface _TtC16AXMediaUtilities24AXMElementDetectorResult : NSObject {
    ? box;
    ? label;
    ? labelName;
    ? confidence;
}




-(CGFloat)resultConfidence;
-(NSInteger)resultLabel;
-(id)init;
-(id)resultLabelName;
-(struct CGRect )resultBox;


@end


#endif