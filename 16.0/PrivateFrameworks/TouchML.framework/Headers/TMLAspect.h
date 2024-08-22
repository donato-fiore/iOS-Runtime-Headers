// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLASPECT_H
#define TMLASPECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMLAspect : NSObject

@property (nonatomic) int advice; // ivar: _advice
@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSString *registrationKey; // ivar: _registrationKey
@property (copy, nonatomic) NSString *signalName; // ivar: _signalName
@property (weak, nonatomic) NSObject *target; // ivar: _target
@property (copy, nonatomic) id *unregisterBlock; // ivar: _unregisterBlock


+(id)aspectForObjectsImplementingProtocolNamed:(id)arg0 signalOrMethodName:(id)arg1 advice:(int)arg2 block:(id)arg3 ;
+(id)aspectForObjectsWithClassNamed:(id)arg0 signalOrMethodName:(id)arg1 advice:(int)arg2 block:(id)arg3 ;
+(id)aspectForRegistrationKey:(id)arg0 signalOrMethodName:(id)arg1 advice:(int)arg2 block:(id)arg3 ;
+(id)aspectForTarget:(id)arg0 signalOrMethodName:(id)arg1 advice:(int)arg2 block:(id)arg3 ;
+(id)jsConvertedBlock:(SEL)arg0 ;
+(id)tmlAspectForObjectsImplementingProtocolNamed:(id)arg0 signalOrMethodName:(id)arg1 advice:(int)arg2 ;
+(id)tmlAspectForObjectsWithClassNamed:(id)arg0 signalOrMethodName:(id)arg1 advice:(int)arg2 ;
+(id)tmlAspectForTarget:(id)arg0 signalOrMethodName:(id)arg1 advice:(int)arg2 ;
-(void)activateWithObject:(id)arg0 arguments:(id)arg1 returnValue:(id)arg2 newArguments:(*id)arg3 newReturnValue:(*id)arg4 ;
-(void)dealloc;
-(void)tmlDispose;
-(void)unregister;


@end


#endif