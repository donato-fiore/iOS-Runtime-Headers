// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFPLACEMENTCONTROLLER_H
#define UIPDFPLACEMENTCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIPDFPageView.h"

@interface UIPDFPlacementController : NSObject {
    NSMutableArray *_popups;
    CGSize _viewSize;
}


@property (nonatomic) UIPDFPageView *pageView; // ivar: pageView


-(CGFloat)yForObjectAtIndex:(NSUInteger)arg0 ;
-(id)initWithAnnotations:(id)arg0 viewSize:(struct CGSize )arg1 ;
-(id)viewAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )boundsForObjectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)layoutViews:(CGFloat)arg0 ;
-(void)shift:(CGFloat)arg0 ;


@end


#endif