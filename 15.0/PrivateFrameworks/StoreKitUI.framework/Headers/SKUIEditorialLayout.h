// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIEDITORIALLAYOUT_H
#define SKUIEDITORIALLAYOUT_H


#import <Foundation/Foundation.h>

#import "SKUIEditorialComponent.h"
#import "SKUILayoutCache.h"

@interface SKUIEditorialLayout : NSObject {
    NSInteger _landscapeLinkLayoutIndex;
    NSInteger _landscapeTextLayoutIndex;
    NSInteger _landscapeTitleLayoutIndex;
    CGFloat _landscapeWidth;
    NSInteger _portraitLinkLayoutIndex;
    NSInteger _portraitTextLayoutIndex;
    NSInteger _portraitTitleLayoutIndex;
    CGFloat _portraitWidth;
}


@property (readonly, nonatomic) SKUIEditorialComponent *editorialComponent; // ivar: _editorial
@property (readonly, nonatomic) SKUILayoutCache *layoutCache; // ivar: _textLayoutCache


-(CGFloat)layoutHeightForOrientation:(NSInteger)arg0 expanded:(BOOL)arg1 ;
-(id)_bodyTextLayoutRequestWithTotalWidth:(CGFloat)arg0 ;
-(id)_linkLayoutRequestWithTotalWidth:(CGFloat)arg0 ;
-(id)_titleTextLayoutRequestWithTotalWidth:(CGFloat)arg0 ;
-(id)bodyTextLayoutForOrientation:(NSInteger)arg0 ;
-(id)initWithEditorial:(id)arg0 layoutCache:(id)arg1 ;
-(id)linkLayoutForOrientation:(NSInteger)arg0 ;
-(id)titleTextLayoutForOrientation:(NSInteger)arg0 ;
-(void)enqueueLayoutRequests;
-(void)setLayoutWidth:(CGFloat)arg0 forOrientation:(NSInteger)arg1 ;


@end


#endif