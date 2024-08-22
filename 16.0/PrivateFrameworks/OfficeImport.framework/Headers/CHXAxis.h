// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHXAXIS_H
#define CHXAXIS_H


#import <Foundation/Foundation.h>


@interface CHXAxis : NSObject



+(?)chdAxisFromXmlAxisElementstate;
+(?)chdAxisPositionFromXmlAxisElementstate;
+(?)chdCrossesFromXmlAxisElementstate;
+(?)chdTickLabelPositionFromXmlTickLabelPositionElement;
+(?)chdTickMarkFromXmlTickMarkElement;
+(?)chxAxisClassWithXmlAxisElementstate;
+(?)readScalingFromXmlScalingElement:(?)arg0 axisstate;
+(Class)chxAxisClassWithChdAxis:(id)arg0 ;


@end


#endif