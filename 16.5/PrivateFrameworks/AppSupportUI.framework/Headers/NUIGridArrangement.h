// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUIGRIDARRANGEMENT_H
#define NUIGRIDARRANGEMENT_H

@class NSString;
@protocol _NUIGridArrangementContainer, NUIArrangementContainer, NUIGridArrangementDataSource;

#import <Foundation/Foundation.h>


@interface NUIGridArrangement : NSObject <_NUIGridArrangementContainer>

 {
    _NUIGridArrangement _arrangement;
    id<NUIArrangementContainer> *_container;
    id<NUIGridArrangementDataSource> *_dataSource;
    CGFloat _scale;
    ? _flags;
    CGRect _bounds;
}


@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (readonly, weak, nonatomic) NSObject<NUIArrangementContainer> *container;
@property (readonly, weak, nonatomic) NSObject<NUIGridArrangementDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger horizontalDistribution;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger verticalDistribution;


-(id)initWithContainer:(id)arg0 dataSource:(id)arg1 ;
-(struct CGRect )frameForColumns:(struct _NSRange )arg0 rows:(struct _NSRange )arg1 inBounds:(struct CGRect )arg2 ;
-(struct CGRect )layoutFrameForArrangedSubview:(id)arg0 withProposedContentFrame:(struct CGRect )arg1 ;
-(struct CGRect )unionFrameForItemsInColumns:(struct _NSRange )arg0 rows:(struct _NSRange )arg1 inBounds:(struct CGRect )arg2 ;
-(struct CGSize )contentLayoutSizeFittingSize:(struct CGSize )arg0 forArrangedSubview:(id)arg1 ;
-(struct CGSize )layoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)populateGridArrangementCells:(*void)arg0 ;
-(void)populateGridArrangementDimension:(*void)arg0 withCells:(*void)arg1 axis:(NSInteger)arg2 ;
-(void)positionItemsInBounds:(struct CGRect )arg0 block:(id)arg1 ;
-(void)positionItemsInColumns:(struct _NSRange )arg0 rows:(struct _NSRange )arg1 inBounds:(struct CGRect )arg2 block:(id)arg3 ;
-(void)reloadData;


@end


#endif