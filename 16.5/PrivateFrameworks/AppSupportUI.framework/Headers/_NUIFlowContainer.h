// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUIFLOWCONTAINER_H
#define _NUIFLOWCONTAINER_H

@class NSString;
@protocol _NUIGridArrangementContainer;

#import <Foundation/Foundation.h>


@interface _NUIFlowContainer : NSObject <_NUIGridArrangementContainer>

 {
    _NUIGridArrangement _gridArrangement;
    *void _flowArrangement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFlowArrangement:(*void)arg0 ;
-(struct CGRect )layoutFrameForArrangedSubview:(id)arg0 withProposedContentFrame:(struct CGRect )arg1 ;
-(struct CGSize )contentLayoutSizeFittingSize:(struct CGSize )arg0 forArrangedSubview:(id)arg1 ;
-(void)dealloc;
-(void)populateGridArrangementCells:(*void)arg0 ;
-(void)populateGridArrangementDimension:(*void)arg0 withCells:(*void)arg1 axis:(NSInteger)arg2 ;


@end


#endif