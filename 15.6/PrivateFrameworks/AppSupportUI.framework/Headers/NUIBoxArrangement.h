// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUIBOXARRANGEMENT_H
#define NUIBOXARRANGEMENT_H

@class NSString;
@protocol _NUIBoxArrangementContainer, NUIArrangementContainer, NUIBoxArrangementDataSource;

#import <Foundation/Foundation.h>


@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer>

 {
    _NUIBoxArrangement _arrangement;
    id<NUIArrangementContainer> *_container;
    id<NUIBoxArrangementDataSource> *_dataSource;
    ? _flags;
    CGFloat _scale;
    CGRect _bounds;
}


@property (readonly, weak, nonatomic) NSObject<NUIArrangementContainer> *container;
@property (readonly, weak, nonatomic) NSObject<NUIBoxArrangementDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContainer:(id)arg0 dataSource:(id)arg1 ;
-(struct CGRect )layoutFrameForArrangedSubview:(id)arg0 withProposedContentFrame:(struct CGRect )arg1 ;
-(struct CGSize )contentLayoutSizeFittingSize:(struct CGSize )arg0 forArrangedSubview:(id)arg1 ;
-(struct CGSize )layoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)populateBoxArrangementCells:(*void)arg0 ;
-(void)positionItemsInBounds:(struct CGRect )arg0 block:(id)arg1 ;
-(void)reloadData;


@end


#endif