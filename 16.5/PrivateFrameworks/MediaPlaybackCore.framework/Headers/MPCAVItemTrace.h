// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCAVITEMTRACE_H
#define MPCAVITEMTRACE_H

@class MPAVItem, NSString;

#import <Foundation/Foundation.h>


@interface MPCAVItemTrace : NSObject

@property (nonatomic) unsigned int endEvent; // ivar: _endEvent
@property (nonatomic) CGFloat ended; // ivar: _ended
@property (weak, nonatomic) MPAVItem *item; // ivar: _item
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat started; // ivar: _started


+(id)traceIntervalWithName:(id)arg0 item:(id)arg1 beginEvent:(unsigned int)arg2 endEvent:(unsigned int)arg3 ;
+(void)traceWithName:(id)arg0 item:(id)arg1 event:(unsigned int)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)endInterval;


@end


#endif