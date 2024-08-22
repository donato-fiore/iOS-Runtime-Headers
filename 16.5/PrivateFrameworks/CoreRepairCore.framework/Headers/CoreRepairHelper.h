// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREREPAIRHELPER_H
#define COREREPAIRHELPER_H

@class NSString;
@protocol CoreRepairHelperProtocol, setupModuleChallengeCallBack;

#import <Foundation/Foundation.h>


@interface CoreRepairHelper : NSObject <CoreRepairHelperProtocol, setupModuleChallengeCallBack>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL factoryServiceOn; // ivar: _factoryServiceOn
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_mount:(char *)arg0 withFlag:(int)arg1 ;
-(id)init;
-(void)seal:(id)arg0 withReply:(id)arg1 ;
-(void)setupModuleChallengeCallBack:(struct __AMFDR *)arg0 ;


@end


#endif