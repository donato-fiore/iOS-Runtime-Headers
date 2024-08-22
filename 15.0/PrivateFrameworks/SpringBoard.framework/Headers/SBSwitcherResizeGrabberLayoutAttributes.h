// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERRESIZEGRABBERLAYOUTATTRIBUTES_H
#define SBSWITCHERRESIZEGRABBERLAYOUTATTRIBUTES_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBSwitcherResizeGrabberLayoutAttributes : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic) NSUInteger edge; // ivar: _edge
@property (retain, nonatomic) SBAppLayout *leafAppLayout; // ivar: _leafAppLayout


+(id)attributesWithLeafAppLayout:(id)arg0 edge:(NSUInteger)arg1 ;
-(id)_copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif