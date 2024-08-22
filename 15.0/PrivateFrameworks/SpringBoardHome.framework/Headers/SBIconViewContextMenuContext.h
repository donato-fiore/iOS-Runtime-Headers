// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONVIEWCONTEXTMENUCONTEXT_H
#define SBICONVIEWCONTEXTMENUCONTEXT_H

@class NSString, UIContextMenuInteraction, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBIconView.h"

@interface SBIconViewContextMenuContext : NSObject <NSCopying>

 {
    NSString *_nodeIdentifier;
}


@property (weak, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, weak, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGPoint location; // ivar: _location


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)contextMenuNotificationUserInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIconView:(id)arg0 location:(struct CGPoint )arg1 ;


@end


#endif