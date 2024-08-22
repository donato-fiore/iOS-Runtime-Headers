// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCALETESTPROCESSOR_H
#define SCALETESTPROCESSOR_H



#import "PurplePageLoadTestRunner.h"

@interface ScaleTestProcessor : PurplePageLoadTestRunner {
    float _scale;
}




-(BOOL)startPageAction:(id)arg0 ;
-(void)doneRendering:(id)arg0 ;
-(void)setZoomScale:(float)arg0 ;


@end


#endif