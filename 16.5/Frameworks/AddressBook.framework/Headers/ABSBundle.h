// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABSBUNDLE_H
#define ABSBUNDLE_H

@class NSBundle;

#import <Foundation/Foundation.h>


@interface ABSBundle : NSObject

@property (readonly, nonatomic) NSBundle *backingBundle; // ivar: _backingBundle


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)classNamed:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithBackingBundle:(id)arg0 ;


@end


#endif