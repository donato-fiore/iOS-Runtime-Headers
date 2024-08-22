// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKERASERTOOL_H
#define PKERASERTOOL_H



#import "PKTool.h"

@interface PKEraserTool : PKTool

@property (readonly, nonatomic) CGFloat _weight;
@property (readonly, nonatomic) NSInteger eraserType;


-(id)initWithEraserType:(NSInteger)arg0 ;
-(id)initWithEraserType:(NSInteger)arg0 weight:(CGFloat)arg1 ;


@end


#endif