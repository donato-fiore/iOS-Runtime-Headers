// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDBATTERYSAVER_H
#define _CDBATTERYSAVER_H

@class NSXPCConnection;
@protocol _CDBatterySaverProtocol;

#import <Foundation/Foundation.h>


@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol>

 {
    NSXPCConnection *_connection;
}




+(id)batterySaver;
+(id)sharedInstance;
-(BOOL)setPowerMode:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setPowerMode:(NSInteger)arg0 fromSource:(id)arg1 ;
-(NSInteger)getPowerMode;
-(NSInteger)setMode:(NSInteger)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setPowerMode:(NSInteger)arg0 fromSource:(id)arg1 withCompletion:(id)arg2 ;
-(void)setPowerMode:(NSInteger)arg0 withCompletion:(id)arg1 ;


@end


#endif