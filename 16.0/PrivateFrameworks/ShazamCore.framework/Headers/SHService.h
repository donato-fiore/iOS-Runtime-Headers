// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSERVICE_H
#define SHSERVICE_H

@class NSString, NSArray;
@protocol SHService, SHServiceDelegate;

#import <Foundation/Foundation.h>


@interface SHService : NSObject <SHService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRunning;
@property (weak, nonatomic) NSObject<SHServiceDelegate> *serviceDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *workers;


+(id)machServiceName;
+(void)initializeGlobalServiceState;
-(BOOL)shouldStartWorker:(id)arg0 ;
-(void)stop;


@end


#endif