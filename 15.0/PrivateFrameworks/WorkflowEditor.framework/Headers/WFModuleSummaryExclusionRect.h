// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMODULESUMMARYEXCLUSIONRECT_H
#define WFMODULESUMMARYEXCLUSIONRECT_H


#import <Foundation/Foundation.h>


@interface WFModuleSummaryExclusionRect : NSObject

@property (readonly, nonatomic) NSUInteger edge; // ivar: _edge
@property (readonly, nonatomic) CGRect rect; // ivar: _rect


-(id)initWithRect:(struct CGRect )arg0 fromEdge:(NSUInteger)arg1 ;
-(struct CGRect )resolvedRectWithViewBounds:(struct CGRect )arg0 inRTL:(BOOL)arg1 ;


@end


#endif