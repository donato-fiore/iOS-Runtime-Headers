// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MULABELEDVALUEACTIONVIEWMODEL_H
#define MULABELEDVALUEACTIONVIEWMODEL_H

@class NSString;
@protocol MUDynamicButtonCellModel, MULabeledValueActionViewModelProviding, MUDynamicButtonCellModelChangeDelegate;

#import <Foundation/Foundation.h>


@interface MULabeledValueActionViewModel : NSObject <MUDynamicButtonCellModel, MULabeledValueActionViewModelProviding>



@property (copy, nonatomic) id *actionBlock;
@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) NSInteger actionStyle;
@property (nonatomic) NSInteger actionVariant; // ivar: _actionVariant
@property (retain, nonatomic) NSString *alternativeTitleString; // ivar: _alternativeTitleString
@property (readonly, nonatomic) int analyticAction; // ivar: _analyticAction
@property (nonatomic) int analyticsTarget; // ivar: _analyticsTarget
@property (weak, nonatomic) NSObject<MUDynamicButtonCellModelChangeDelegate> *changeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emphasizeValueString; // ivar: _emphasizeValueString
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (readonly, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *titleString; // ivar: _titleString
@property (retain, nonatomic) NSString *valueString; // ivar: _valueString


+(id)messageItemWithMapItem:(id)arg0 ;
-(void)loadSubtitleWithCompletion:(id)arg0 ;


@end


#endif