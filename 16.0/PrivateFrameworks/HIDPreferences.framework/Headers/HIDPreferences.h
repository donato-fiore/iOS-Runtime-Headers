// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDPREFERENCES_H
#define HIDPREFERENCES_H

@class NSString;
@protocol HIDPreferencesProtocol, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface HIDPreferences : NSObject <HIDPreferencesProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    int _option;
    NSObject<OS_xpc_object> *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)getReply:(id)arg0 ;
+(void)destroyConnection:(id)arg0 ;
-(id)init;
-(id)initWithOption:(int)arg0 ;
-(id)setupConnection;
-(void)copy:(id)arg0 user:(id)arg1 host:(id)arg2 domain:(id)arg3 reply:(id)arg4 ;
-(void)copyDomain:(id)arg0 domain:(id)arg1 reply:(id)arg2 ;
-(void)copyMultiple:(id)arg0 user:(id)arg1 host:(id)arg2 domain:(id)arg3 reply:(id)arg4 ;
-(void)dealloc;
-(void)set:(id)arg0 value:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 ;
-(void)setDomain:(id)arg0 value:(id)arg1 domain:(id)arg2 ;
-(void)setMultiple:(id)arg0 keysToRemove:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 ;
-(void)synchronize:(id)arg0 host:(id)arg1 domain:(id)arg2 ;


@end


#endif