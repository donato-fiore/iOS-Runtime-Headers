// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICELLACCESSORYMANAGER_H
#define UICELLACCESSORYMANAGER_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol UICellAccessoryLayout;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UICellAccessoryConfiguration.h"

@interface UICellAccessoryManager : NSObject {
    CGSize _enforcedContainerSize;
}


@property (retain, nonatomic) NSMutableDictionary *accessoryViews; // ivar: _accessoryViews
@property (retain, nonatomic) NSDictionary *configurations; // ivar: _configurations
@property (readonly, nonatomic) CGSize containerSize;
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) CGRect contentFrame;
@property (readonly, nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) UICellAccessoryConfiguration *currentConfiguration;
@property (copy, nonatomic) NSString *currentConfigurationIdentifier; // ivar: _currentConfigurationIdentifier
@property (copy, nonatomic) id *disclosureLayoutWidthProvider; // ivar: _disclosureLayoutWidthProvider
@property (retain, nonatomic) NSObject<UICellAccessoryLayout> *leadingLayout; // ivar: _leadingLayout
@property (nonatomic) BOOL needsLayout; // ivar: _needsLayout
@property (retain, nonatomic) UICellAccessoryConfiguration *previousConfiguration; // ivar: _previousConfiguration
@property (nonatomic) CGSize previousContainerSize; // ivar: _previousContainerSize
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (copy, nonatomic) id *standardLayoutWidthProvider; // ivar: _standardLayoutWidthProvider
@property (retain, nonatomic) NSObject<UICellAccessoryLayout> *trailingLayout; // ivar: _trailingLayout


-(id)_configurationWithIdentifier:(id)arg0 ;
-(id)description;
-(id)initWithContainerView:(id)arg0 ;
-(struct CGRect )_updateAccessories:(id)arg0 previousAccessories:(id)arg1 withLayout:(id)arg2 edge:(NSUInteger)arg3 ;
-(struct CGRect )containerBounds;
-(void)_updateFromPreviousConfiguration:(id)arg0 ;
-(void)layoutIfNeeded;
-(void)performWithEnforcedContainerSize:(struct CGSize )arg0 block:(id)arg1 ;
-(void)updateContainerView:(id)arg0 ;


@end


#endif