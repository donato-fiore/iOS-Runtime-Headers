// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILEAUXILIARYCONTROL_H
#define AVMOBILEAUXILIARYCONTROL_H

@class UIView, NSString;
@protocol AVMobileAuxiliaryControlDelegate;

#import <Foundation/Foundation.h>


@interface AVMobileAuxiliaryControl : NSObject

@property (readonly, nonatomic) UIView *controlView; // ivar: _controlView
@property (weak, nonatomic) NSObject<AVMobileAuxiliaryControlDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger displayPriority; // ivar: _displayPriority
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included


+(id)controlWithDisplayPriority:(NSInteger)arg0 identifier:(id)arg1 ;
+(id)controlWithView:(id)arg0 displayPriority:(NSInteger)arg1 identifier:(id)arg2 ;
-(BOOL)canOnlyAppearInOverflowMenu;
-(id)description;


@end


#endif