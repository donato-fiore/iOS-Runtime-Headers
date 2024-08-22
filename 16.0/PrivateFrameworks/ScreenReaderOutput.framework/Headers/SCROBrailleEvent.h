// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROBRAILLEEVENT_H
#define SCROBRAILLEEVENT_H


#import <Foundation/Foundation.h>


@interface SCROBrailleEvent : NSObject {
    int _type;
    id *_data;
    id *_data2;
    id *_data3;
}


@property (nonatomic) BOOL shouldDisplay; // ivar: _shouldDisplay
@property (readonly, nonatomic) int type;


+(id)eventWithType:(int)arg0 data:(id)arg1 ;
+(id)eventWithType:(int)arg0 data:(id)arg1 data2:(id)arg2 data3:(id)arg3 ;
-(id)data;
-(id)data2;
-(id)data3;
-(id)description;
-(id)initWithType:(int)arg0 data:(id)arg1 data2:(id)arg2 data3:(id)arg3 ;


@end


#endif