// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLNOTIFIERCLIENTADAPTER_H
#define CLNOTIFIERCLIENTADAPTER_H

@class NSString;
@protocol CLNotifierServiceClientProtocol;

#import <Foundation/Foundation.h>


@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol>

 {
    *CLNotifierClientBase _client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid; // ivar: _valid


+(void)becameFatallyBlocked:(id)arg0 index:(NSUInteger)arg1 ;
+(void)performSyncOnSilo:(id)arg0 invoker:(id)arg1 ;
-(id)init;
-(id)initWithClient:(struct CLNotifierClientBase *)arg0 ;
-(void)onNotification:(int)arg0 withData:(id)arg1 ;


@end


#endif