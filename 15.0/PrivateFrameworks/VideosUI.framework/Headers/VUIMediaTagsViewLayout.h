// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIATAGSVIEWLAYOUT_H
#define VUIMEDIATAGSVIEWLAYOUT_H

@class UIColor, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "VUITextLayout.h"

@interface VUIMediaTagsViewLayout : NSObject

@property (nonatomic) BOOL alignBadgeVertically; // ivar: _alignBadgeVertically
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) UIEdgeInsets badgeMargin; // ivar: _badgeMargin
@property (nonatomic) CGFloat badgeMaxHeight; // ivar: _badgeMaxHeight
@property (retain, nonatomic) UIColor *badgeTintColor; // ivar: _badgeTintColor
@property (readonly, nonatomic) UIEdgeInsets commonSenseMargin; // ivar: _commonSenseMargin
@property (retain, nonatomic) NSString *compositingFilter; // ivar: _compositingFilter
@property (readonly, nonatomic, getter=isGroupActivityTagEnabled) BOOL groupActivityTagEnabled; // ivar: _groupActivityTagEnabled
@property (readonly, nonatomic) UIEdgeInsets groupMargin; // ivar: _groupMargin
@property (readonly, nonatomic) NSArray *groupedKeys; // ivar: _groupedKeys
@property (nonatomic) UIEdgeInsets margin; // ivar: _margin
@property (readonly, nonatomic) VUITextLayout *rentalExpirationTextLayout; // ivar: _rentalExpirationTextLayout
@property (readonly, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (readonly, nonatomic) UIEdgeInsets tomatoMeterMargin; // ivar: _tomatoMeterMargin
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)init;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif