// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPPAGELAYOUT_H
#define TSWPPAGELAYOUT_H

@class TSDLayout;
@protocol TSWPHeaderFooterProvider;



@interface TSWPPageLayout : TSDLayout {
    TSWPLayout"] _headerFooterLayouts;
    CGRect _headerFooterClipRects;
    CGRect _headerFooterBorderRects;
}


@property (readonly, nonatomic) BOOL allowsHeaderFooter;
@property (readonly, nonatomic) CGRect bodyRect;
@property (readonly, nonatomic) CGFloat footerHeight;
@property (readonly, nonatomic) BOOL hasFooters;
@property (readonly, nonatomic) BOOL hasHeaders;
@property (readonly, nonatomic) NSObject<TSWPHeaderFooterProvider> *headerFooterProvider;
@property (readonly, nonatomic) BOOL headerFooterProviderValid;
@property (readonly, nonatomic) CGFloat headerHeight;


-(BOOL)i_updateHeaderFooterLayouts;
-(BOOL)isHeaderFooterLayout:(id)arg0 ;
-(BOOL)p_isHeaderFooter:(NSInteger)arg0 editingAtFragmentIndex:(NSInteger)arg1 ;
-(BOOL)shouldHeaderFooterBeVisible:(NSInteger)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 inShapeLayout:(id)arg1 ;
-(id)headerFooterLayout:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(id)i_insertValidatedHeaderFooterLayouts:(*BOOL)arg0 ;
-(struct CGRect )borderRectForHeaderFooter:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(struct CGRect )clipRectForHeaderFooter:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(void)i_clearHeaderFooterLayouts;
-(void)p_updateHeaderFooterClipAndBorderRect;
-(void)p_updateHeaderFooterClipAndBorderRects:(NSInteger)arg0 ;
-(void)parentWillChangeTo:(id)arg0 ;


@end


#endif