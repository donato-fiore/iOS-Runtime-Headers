// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLECELLACCESSORYLAYOUT_H
#define UITABLECELLACCESSORYLAYOUT_H

@class NSString, NSMutableDictionary, NSDictionary;
@protocol UICellAccessoryLayout;

#import <Foundation/Foundation.h>

#import "UICellAccessoryManager.h"

@interface UITableCellAccessoryLayout : NSObject <UICellAccessoryLayout>



@property (readonly, nonatomic) CGFloat _disclosureLayoutWidth;
@property (readonly, nonatomic) CGFloat _standardLayoutWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *disclosureLayoutWidthProvider; // ivar: _disclosureLayoutWidthProvider
@property (nonatomic) NSUInteger edge; // ivar: _edge
@property (retain, nonatomic) NSMutableDictionary *finalAlphas; // ivar: _finalAlphas
@property (retain, nonatomic) NSDictionary *finalFrames; // ivar: _finalFrames
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *initialAlphas; // ivar: _initialAlphas
@property (retain, nonatomic) NSDictionary *initialFrames; // ivar: _initialFrames
@property (weak, nonatomic) UICellAccessoryManager *manager; // ivar: _manager
@property (nonatomic) CGFloat safeAreaInset; // ivar: _safeAreaInset
@property (copy, nonatomic) id *spacingBlock; // ivar: _spacingBlock
@property (copy, nonatomic) id *standardLayoutWidthProvider; // ivar: _standardLayoutWidthProvider
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalFrame; // ivar: _totalFrame


-(CGFloat)_layoutWidthForAccessory:(id)arg0 withItemWidth:(CGFloat)arg1 ;
-(CGFloat)_totalWidthForAccessories:(id)arg0 withContainerSize:(struct CGSize )arg1 ;
-(CGFloat)finalAlphaForAccessory:(id)arg0 ;
-(CGFloat)initialAlphaForAccessory:(id)arg0 ;
-(id)_framesForAccessories:(id)arg0 withContainerSize:(struct CGSize )arg1 outTotalFrame:(struct CGRect *)arg2 ;
-(id)init;
-(struct CGRect )_frameForAccessoryAtIndex:(NSUInteger)arg0 inAccessories:(id)arg1 containerSize:(struct CGSize )arg2 withXOrigin:(*CGFloat)arg3 ;
-(struct CGRect )endLayout;
-(struct CGRect )finalFrameForAccessory:(id)arg0 ;
-(struct CGRect )initialFrameForAccessory:(id)arg0 ;
-(void)prepareLayoutForAccessories:(id)arg0 previousAccessories:(id)arg1 configurationIdentifier:(id)arg2 ;


@end


#endif