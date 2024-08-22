// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPUNCHOUTCOLLECTIONVIEWCELL_H
#define MUPUNCHOUTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString;
@protocol MKActivityObserving;


#import "MUPunchoutView.h"
#import "MUPunchoutViewModel.h"

@interface MUPunchoutCollectionViewCell : UICollectionViewCell <MKActivityObserving>

 {
    MUPunchoutView *_punchoutView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) MUPunchoutViewModel *viewModel;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupContentView;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;


@end


#endif