// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSENDLATERHEADERCOLLECTIONVIEWHELPER_H
#define MFSENDLATERHEADERCOLLECTIONVIEWHELPER_H


#import <Foundation/Foundation.h>


@interface MFSendLaterHeaderCollectionViewHelper : NSObject

@property (nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (nonatomic) CGFloat longestDateWidth; // ivar: _longestDateWidth
@property (nonatomic) CGFloat longestTimeWidth; // ivar: _longestTimeWidth
@property (nonatomic) CGFloat sendLaterLabelWidth; // ivar: _sendLaterLabelWidth
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale
@property (nonatomic) CGFloat width; // ivar: _width
@property (readonly, nonatomic) BOOL willContentTruncate;


-(BOOL)updateLayoutMarginsIfNeeded:(struct UIEdgeInsets )arg0 ;
-(BOOL)updateWidthIfNeeded:(CGFloat)arg0 ;
-(id)initWithWidth:(CGFloat)arg0 layoutMargins:(struct UIEdgeInsets )arg1 viewScale:(CGFloat)arg2 ;
-(void)precalculateWidthsWithDescription:(id)arg0 ;


@end


#endif