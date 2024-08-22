// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDAPPACTIONRECORDER_H
#define _CDAPPACTIONRECORDER_H

@class NSXPCConnection, NSString;
@protocol _CDActivityEventRecording, _CDAppActionRecording, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *previousActivityType; // ivar: _previousActivityType
@property (retain, nonatomic) NSString *previousTitle; // ivar: _previousTitle
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)appActionRecorder;
-(id)init;
-(void)_recordUserActivityEvent:(id)arg0 ;
-(void)createConnection;
-(void)dealloc;
-(void)recordAppAction:(id)arg0 ;
-(void)recordUserActivityEvent:(id)arg0 ;
-(void)recordUserActivityEventForCollection:(id)arg0 ;
-(void)recordUserActivityEvents:(id)arg0 ;


@end


#endif