// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DRENDERBUFFERALLOCATORINFO_H
#define TSCH3DRENDERBUFFERALLOCATORINFO_H


#import <Foundation/Foundation.h>

#import "TSCH3DSession.h"

@interface TSCH3DRenderbufferAllocatorInfo : NSObject

@property (readonly, nonatomic) FramebufferAttributes framebufferAttributes; // ivar: _framebufferAttributes
@property (readonly, retain, nonatomic) TSCH3DSession *session; // ivar: _session
@property (nonatomic) tvec2<int> size; // ivar: _size


+(id)infoWithFramebufferAttributes:(struct FramebufferAttributes )arg0 size:(struct tvec2<int> )arg1 session:(id)arg2 ;
-(id)initWithFramebufferAttributes:(struct FramebufferAttributes )arg0 size:(struct tvec2<int> )arg1 session:(id)arg2 ;


@end


#endif