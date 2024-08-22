// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUICONTAINERBOXVIEW_H
#define NUICONTAINERBOXVIEW_H

@class NSString;
@protocol _NUIBoxArrangementContainer, _UIMultilineTextContentSizing;


#import "NUIContainerView.h"

@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer, _UIMultilineTextContentSizing>

 {
    _NUIBoxArrangement _arrangement;
    ? _boxFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger horizontalAlignment;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger verticalAlignment;


+(id)containerBoxViewWithArrangedSubviews:(id)arg0 ;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg0 ;
-(BOOL)setNeedsInvalidation:(NSInteger)arg0 ;
-(id)arrangedDescription;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )calculateArrangedSizeFittingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutArrangedSubviewsInBounds:(struct CGRect )arg0 ;
-(void)populateBoxArrangementCells:(*void)arg0 ;


@end


#endif