// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMUSICPLAYERMEDIAITEMPROXY_H
#define _MPMUSICPLAYERMEDIAITEMPROXY_H

@class NSProxy, NSString;


#import "MPMediaItem.h"

@interface _MPMusicPlayerMediaItemProxy : NSProxy

@property (readonly, nonatomic) MPMediaItem *item; // ivar: _item
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithItemIdentifier:(id)arg0 item:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif