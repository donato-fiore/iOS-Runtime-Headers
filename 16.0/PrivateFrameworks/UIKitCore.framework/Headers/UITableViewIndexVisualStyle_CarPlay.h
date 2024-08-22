// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLEVIEWINDEXVISUALSTYLE_CARPLAY_H
#define UITABLEVIEWINDEXVISUALSTYLE_CARPLAY_H

@class NSString, UIFont;
@protocol UITableViewIndexVisualStyle;

#import <Foundation/Foundation.h>

#import "UITableViewIndex.h"

@interface UITableViewIndexVisualStyle_CarPlay : NSObject <UITableViewIndexVisualStyle>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat indexWidth;
@property (readonly, nonatomic) CGFloat lineSpacing;
@property (readonly, nonatomic) CGFloat minLineSpacing;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableViewIndex *tableViewIndex; // ivar: _tableViewIndex


-(id)initWithTableViewIndex:(id)arg0 ;
-(void)didDrawEntryAtIndex:(NSInteger)arg0 indexBounds:(struct CGRect )arg1 entryBounds:(struct CGRect )arg2 context:(struct CGContext *)arg3 originalColor:(id)arg4 ;
-(void)handleTouch:(id)arg0 withEvent:(id)arg1 touchedEntryIndex:(NSInteger)arg2 ;
-(void)selectedSectionDidChange:(NSInteger)arg0 ;
-(void)trackingDidBegin;
-(void)trackingDidEnd;
-(void)willDrawEntryAtIndex:(NSInteger)arg0 indexBounds:(struct CGRect )arg1 entryBounds:(struct CGRect )arg2 context:(struct CGContext *)arg3 originalColor:(id)arg4 ;


@end


#endif