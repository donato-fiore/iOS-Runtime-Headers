// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHVISUALIZATION_H
#define CHVISUALIZATION_H

@protocol CHVisualizationDelegate;

#import <Foundation/Foundation.h>

#import "CHRecognitionSession.h"

@interface CHVisualization : NSObject

@property (weak, nonatomic) NSObject<CHVisualizationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger layeringPriority;
@property (readonly, nonatomic) CHRecognitionSession *recognitionSession; // ivar: _recognitionSession
@property (readonly, nonatomic) BOOL wantsInputDrawings;


-(id)initWithRecognitionSession:(id)arg0 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;
-(void)toggleVisualizationRegionAtPoint:(struct CGPoint )arg0 ;


@end


#endif