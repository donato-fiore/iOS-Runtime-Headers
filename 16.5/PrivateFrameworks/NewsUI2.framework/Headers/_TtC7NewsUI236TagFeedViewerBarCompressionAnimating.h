// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI236TAGFEEDVIEWERBARCOMPRESSIONANIMATING_H
#define _TTC7NEWSUI236TAGFEEDVIEWERBARCOMPRESSIONANIMATING_H

@class SwiftObject;
@protocol TUBarCompressionAnimating;



@interface _TtC7NewsUI236TagFeedViewerBarCompressionAnimating : SwiftObject <TUBarCompressionAnimating>

 {
    ? viewController;
    ? scrollView;
    ? scrollPosition;
    ? sectionModel;
    ? percentage;
    ? mastheadModel;
}


@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic, readonly) CGFloat topOffset;


-(BOOL)animationShouldBeginForScrollView:(id)arg0 currentlyFullyCompressed:(BOOL)arg1 ;
-(CGFloat)maximumBarHeightForTraitCollection:(id)arg0 ;
-(CGFloat)minimumBarHeightForTraitCollection:(id)arg0 ;
-(void)prepareForUpdates;
-(void)reloadWithTraitCollection:(id)arg0 ;
-(void)scrollViewIsAtTop:(BOOL)arg0 offset:(CGFloat)arg1 ;
-(void)updateWithPercentage:(CGFloat)arg0 ;


@end


#endif