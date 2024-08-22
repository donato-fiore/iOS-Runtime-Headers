// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBARINSERTLAYOUTDATA_H
#define _UIBARINSERTLAYOUTDATA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIBarInsertLayoutData : NSObject <NSCopying>



@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) CGFloat assignedHeight; // ivar: _assignedHeight
@property (nonatomic, getter=isCollapsible) BOOL collapsible; // ivar: _collapsible
@property (readonly, nonatomic) CGFloat collapsingHeight; // ivar: _collapsingHeight
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL ignoredForCollapsingBehaviors; // ivar: _ignoredForCollapsingBehaviors
@property (readonly, nonatomic) CGFloat layoutMinimumHeight;
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) NSInteger order; // ivar: _order
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (nonatomic) BOOL prefersExpanded; // ivar: _prefersExpanded
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic, getter=isVariableHeight) BOOL variableHeight;


+(id)calculateRestingHeightsForLayouts:(id)arg0 ;
+(struct ? )calculateLayoutHeights:(id)arg0 ;
+(void)updateLayoutParameters:(id)arg0 overflowLayout:(id)arg1 forAvailableHeight:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)setFixedHeight:(CGFloat)arg0 ;


@end


#endif