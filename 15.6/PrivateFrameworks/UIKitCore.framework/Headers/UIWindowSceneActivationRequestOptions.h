// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWINDOWSCENEACTIVATIONREQUESTOPTIONS_H
#define UIWINDOWSCENEACTIVATIONREQUESTOPTIONS_H

@class NSString;
@protocol NSCopying;


#import "UISceneActivationRequestOptions.h"
#import "UISceneConfiguration.h"

@interface UIWindowSceneActivationRequestOptions : UISceneActivationRequestOptions <NSCopying>



@property (copy, nonatomic, setter=_setInteractionIdentifier:) NSString *_interactionIdentifier; // ivar: __interactionIdentifier
@property (nonatomic, setter=_setPreferredSizeCategory:) NSUInteger _preferredSizeCategory; // ivar: __preferredSizeCategory
@property (nonatomic, setter=_setPreserveLayout:) BOOL _preserveLayout; // ivar: __preserveLayout
@property (retain, nonatomic, setter=_setQuickLookSceneConfiguration:) UISceneConfiguration *_quickLookSceneConfiguration; // ivar: __quickLookSceneConfiguration
@property (nonatomic) NSUInteger preferredPresentationStyle; // ivar: _preferredPresentationStyle


-(id)_descriptionProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif