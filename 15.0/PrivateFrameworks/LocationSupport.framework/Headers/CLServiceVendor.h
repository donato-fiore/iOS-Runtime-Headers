// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSERVICEVENDOR_H
#define CLSERVICEVENDOR_H

@class NSMutableDictionary, NSDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface CLServiceVendor : NSObject {
    NSMutableDictionary *_catalog;
    NSDictionary *_serviceReplacementMap;
    NSMutableSet *_unavailableServiceNames;
    NSMutableSet *_timeCoercibleSilos;
    int _missBehavior;
    CGFloat _currentGlobalLatchedAbsoluteTimestamp;
    NSMutableDictionary *_recordingFromTriggersByTo;
    NSMutableDictionary *_recordingToTriggersByFrom;
}




+(id)sharedInstance;
+(void)initialize;
+(void)rereadConfiguration:(id)arg0 ;
-(BOOL)ensureServiceIsRunning:(id)arg0 ;
-(BOOL)isServiceEnabled:(id)arg0 ;
-(BOOL)isServiceRunning:(id)arg0 ;
-(BOOL)isTimeCoercionEnabled;
-(id)getServiceWithName:(id)arg0 ;
-(id)init;
-(id)proxyForService:(id)arg0 ;
-(id)proxyForService:(id)arg0 forClient:(id)arg1 ;
-(id)setRecordingTriggerMap:(id)arg0 outputPathBase:(id)arg1 ;
-(int)missBehavior;
-(void)amendServiceReplacementMap:(id)arg0 missBehavior:(int)arg1 ;
-(void)dealloc;
-(void)enableTimeCoercion;
-(void)retireServiceWithName:(id)arg0 ;
-(void)setCurrentGlobalLatchedAbsoluteTimestamp:(CGFloat)arg0 ;
-(void)setServiceReplacementMap:(id)arg0 missBehavior:(int)arg1 ;


@end


#endif