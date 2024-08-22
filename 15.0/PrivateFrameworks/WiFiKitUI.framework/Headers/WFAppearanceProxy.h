// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAPPEARANCEPROXY_H
#define WFAPPEARANCEPROXY_H

@class UIFont, UIColor;

#import <Foundation/Foundation.h>


@interface WFAppearanceProxy : NSObject

@property (nonatomic) UIFont *cellTextLabelFont; // ivar: _cellTextLabelFont
@property (retain, nonatomic) UIColor *tableViewCellBackgroundColor; // ivar: _tableViewCellBackgroundColor
@property (nonatomic) NSInteger tableViewStyle; // ivar: _tableViewStyle


+(id)defaultAppearanceProxy;
+(id)setupAppearanceProxy;
-(void)apply;


@end


#endif