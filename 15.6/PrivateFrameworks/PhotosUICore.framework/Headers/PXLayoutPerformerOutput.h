// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLAYOUTPERFORMEROUTPUT_H
#define PXLAYOUTPERFORMEROUTPUT_H


#import <Foundation/Foundation.h>


@interface PXLayoutPerformerOutput : NSObject {
    *CGRect _layoutRects;
    NSInteger _capacity;
    NSInteger _lastIndex;
}


@property (readonly, nonatomic) NSInteger count;


-(id)initWithCapacity:(NSInteger)arg0 ;
-(struct CGRect )layoutRectAtIndex:(NSInteger)arg0 ;
-(void)appendLayoutRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)removeAllRects;


@end


#endif