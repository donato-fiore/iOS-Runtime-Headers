// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCELLCONFIGURATION_H
#define SUCELLCONFIGURATION_H

@class UIView<SUCellConfigurationView>;

#import <Foundation/Foundation.h>


@interface SUCellConfiguration : NSObject {
    id *_context;
    BOOL _isDeleteConfirmationVisible;
    BOOL _needsDisplay;
}


@property (retain, nonatomic) id *context;
@property (nonatomic) BOOL isDeleteConfirmationVisible;
@property (nonatomic) CGSize layoutSize; // ivar: _layoutSize
@property (nonatomic) BOOL needsDisplay;
@property (readonly, nonatomic) NSUInteger numberOfImages;
@property (readonly, nonatomic) NSUInteger numberOfLabels;
@property (retain, nonatomic) id *representedObject; // ivar: _representedObject
@property (nonatomic) UIView<SUCellConfigurationView> *view; // ivar: _view


+(CGFloat)minimumRowHeight;
+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
+(id)copyDefaultContext;
-(BOOL)getShadowColor:(*id)arg0 offset:(struct CGSize *)arg1 forLabelAtIndex:(NSUInteger)arg2 withModifiers:(NSUInteger)arg3 ;
-(NSInteger)textAlignmentForLabelAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfLabelForPurchaseAnimation;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)imageAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)stringForLabelAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForAccessoryViewWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameForImageAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLabelAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)drawBackgroundWithModifiers:(NSUInteger)arg0 ;
-(void)drawWithModifiers:(NSUInteger)arg0 ;
-(void)reloadData;


@end


#endif