// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWCACHEDHIGHLIGHTEVENT_H
#define SWCACHEDHIGHLIGHTEVENT_H

@class NSUUID;
@protocol NSCopying, SWHighlightEvent;

#import <Foundation/Foundation.h>

#import "SWHighlight.h"

@interface SWCachedHighlightEvent : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<SWHighlightEvent> *event; // ivar: _event
@property (readonly, nonatomic) SWHighlight *highlight; // ivar: _highlight
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)cachedEvent:(id)arg0 forHighlight:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEvent:(id)arg0 forHighlight:(id)arg1 ;


@end


#endif