// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIASSISTANTITEM_H
#define RTIASSISTANTITEM_H

@class UIColor, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTIAssistantItem : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) float centerViewPreferredWidth; // ivar: _centerViewPreferredWidth
@property (retain, nonatomic) UIColor *detachedBackgroundColor; // ivar: _detachedBackgroundColor
@property (retain, nonatomic) UIColor *detachedTintColor; // ivar: _detachedTintColor
@property (retain, nonatomic) NSArray *leadingBarButtonGroups; // ivar: _leadingBarButtonGroups
@property (nonatomic) BOOL showsBarButtonItemsInline; // ivar: _showsBarButtonItemsInline
@property (nonatomic) BOOL showsInputDashboardViewController; // ivar: _showsInputDashboardViewController
@property (retain, nonatomic) NSArray *trailingBarButtonGroups; // ivar: _trailingBarButtonGroups
@property (nonatomic) BOOL visibleWhenMinimized; // ivar: _visibleWhenMinimized


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif