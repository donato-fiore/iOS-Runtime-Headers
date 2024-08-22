// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ANESHAREDEVENTS_H
#define _ANESHAREDEVENTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _ANESharedEvents : NSObject

@property (readonly, nonatomic) NSArray *signalEvents; // ivar: _signalEvents
@property (readonly, nonatomic) NSArray *waitEvents; // ivar: _waitEvents


+(id)new;
+(id)sharedEventsWithSignalEvents:(id)arg0 waitEvents:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithSignalEvents:(id)arg0 waitEvents:(id)arg1 ;


@end


#endif