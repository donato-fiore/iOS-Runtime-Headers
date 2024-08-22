// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADBIRTHDAYLISTENER_H
#define CADBIRTHDAYLISTENER_H

@protocol CalBirthdayListener;

#import <Foundation/Foundation.h>


@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) NSObject<CalBirthdayListener> *ekBirthdayListener; // ivar: _ekBirthdayListener
@property (retain, nonatomic) Class listenerClass; // ivar: _listenerClass


+(BOOL)birthdayCalendarEnabled;
+(id)sharedListener;
+(void)reset;
+(void)setBirthdayCalendarEnabled:(BOOL)arg0 ;
+(void)start;
-(BOOL)birthdayCalendarEnabled;
-(id)init;
-(void)reset;
-(void)setBirthdayCalendarEnabled:(BOOL)arg0 ;
-(void)start;


@end


#endif