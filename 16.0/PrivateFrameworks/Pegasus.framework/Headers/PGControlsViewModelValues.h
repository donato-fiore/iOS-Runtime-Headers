// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCONTROLSVIEWMODELVALUES_H
#define PGCONTROLSVIEWMODELVALUES_H

@class NSString, UIColor, UIImage, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PGPlaybackStatePrerollAttributes.h"

@interface PGControlsViewModelValues : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *actionButtonAccessibilityIdentifier;
@property (readonly, nonatomic) UIColor *actionButtonBackgroundTintColor;
@property (readonly, nonatomic) UIColor *actionButtonImageTintColor;
@property (readonly, copy, nonatomic) NSString *actionButtonSystemImageName;
@property (readonly, nonatomic) BOOL actionButtonsWantBackground;
@property (readonly, copy, nonatomic) NSString *cancelButtonAccessibilityIdentifier;
@property (readonly, nonatomic) UIColor *cancelButtonBackgroundTintColor;
@property (readonly, nonatomic) UIImage *cancelButtonCustomImage;
@property (readonly, copy, nonatomic) NSString *cancelButtonCustomText;
@property (readonly, nonatomic) UIColor *cancelButtonImageTintColor;
@property (readonly, copy, nonatomic) NSString *cancelButtonSystemImageName;
@property (readonly, nonatomic) BOOL controlsShouldAutoHide;
@property (readonly, nonatomic) NSMutableDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly, nonatomic) BOOL includesActionButton;
@property (readonly, nonatomic) BOOL includesCancelButton;
@property (readonly, nonatomic) BOOL includesContentLoadingIndicator;
@property (readonly, nonatomic) BOOL includesDoubleDoubleTapGestureRecognizer;
@property (readonly, nonatomic) BOOL includesDoubleTapGestureRecognizer;
@property (readonly, nonatomic) BOOL includesLiveIndicatorBadge;
@property (readonly, nonatomic) BOOL includesProgressBar;
@property (readonly, nonatomic) BOOL includesRestoreButton;
@property (readonly, nonatomic) BOOL includesSingleTapGestureRecognizer;
@property (readonly, nonatomic) BOOL includesSkipBackButton;
@property (readonly, nonatomic) BOOL includesSkipForwardButton;
@property (readonly, nonatomic) BOOL includesWaitingToPlayIndicator;
@property (readonly, nonatomic) BOOL isActionButtonEnabled;
@property (readonly, nonatomic) BOOL isPrerollActive;
@property (readonly, nonatomic) BOOL isSkipBackButtonEnabled;
@property (readonly, nonatomic) BOOL isSkipForwardButtonEnabled;
@property (readonly, nonatomic) PGPlaybackStatePrerollAttributes *prerollAttributes;
@property (readonly, nonatomic) UIColor *prerollTintColor;
@property (readonly, nonatomic) BOOL progressBarShouldUpdate;
@property (readonly, copy, nonatomic) NSString *restoreButtonAccessibilityIdentifier;
@property (readonly, copy, nonatomic) NSString *restoreButtonSystemImageName;
@property (readonly, copy, nonatomic) NSString *skipBackButtonAccessibilityIdentifier;
@property (readonly, nonatomic) UIColor *skipBackButtonBackgroundTintColor;
@property (readonly, nonatomic) UIColor *skipBackButtonImageTintColor;
@property (readonly, copy, nonatomic) NSString *skipBackButtonSystemImageName;
@property (readonly, copy, nonatomic) NSString *skipForwardButtonAccessibilityIdentifier;
@property (readonly, nonatomic) UIColor *skipForwardButtonBackgroundTintColor;
@property (readonly, nonatomic) UIColor *skipForwardButtonImageTintColor;
@property (readonly, copy, nonatomic) NSString *skipForwardButtonSystemImageName;


+(id)defaultPrerollTintColor;
-(BOOL)_boolForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_integerForKey:(id)arg0 ;
-(id)_objectForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif