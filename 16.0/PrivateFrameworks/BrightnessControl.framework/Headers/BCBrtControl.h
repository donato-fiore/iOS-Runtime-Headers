// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCBRTCONTROL_H
#define BCBRTCONTROL_H

@class NSString, NSDictionary, NSUUID;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BCBrtControl : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_id;
    CGFloat _midNits;
    *__CFUUID _cfContainerID;
    unsigned int _displayService;
}


@property (readonly, copy) id *ID;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly) NSDictionary *capabilities; // ivar: _capabilities
@property (readonly) *__CFUUID cfContainerID;
@property (readonly) NSUUID *containerID; // ivar: _containerID
@property (copy) id *displayInvalidHandler; // ivar: _displayInvalidHandler
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isValid; // ivar: _isValid
@property (readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) CGFloat maxNits; // ivar: _maxNits
@property (readonly) CGFloat minNits; // ivar: _minNits
@property BOOL multipleControlEnabled; // ivar: _multipleControlEnabled
@property (readonly) NSObject<OS_dispatch_queue> *queue;


+(id)copyAllAvailableControls;
+(id)copyAvailableControls;
// +(id)newMonitorForAllControlsWithHandler:(id)arg0 error:(unk)arg1  ;
// +(id)newMonitorWithHandler:(id)arg0 error:(unk)arg1  ;
-(BOOL)_checkIsValid:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setNits:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setProperty:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(CGFloat)getNitsWithError:(*id)arg0 ;
-(id)copyModuleIdentifier;
-(id)copyProperty:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_runOnCallbackQueue:(id)arg0 ;
-(void)dealloc;
-(void)setDisplayService:(unsigned int)arg0 ;
-(void)setNitsAsync:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)setPropertyAync:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif