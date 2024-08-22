// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARINSERTLAYOUTDATA_H
#define _UIBARINSERTLAYOUTDATA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIBarInsertLayoutData : NSObject <NSCopying>

 {
    BOOL _collapsible;
    BOOL _prefersExpanded;
    BOOL _ignoredForCollapsingBehaviors;
    BOOL _active;
    NSString *_identifier;
    CGFloat _minimumHeight;
    CGFloat _preferredHeight;
    CGFloat _assignedHeight;
    CGFloat _collapsingHeight;
    NSInteger _priority;
    NSInteger _order;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif