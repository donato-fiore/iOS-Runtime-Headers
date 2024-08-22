// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMBASESERVICE_H
#define CDMBASESERVICE_H

@class NSHashTable, NSString, NSSet;
@protocol CDMService;

#import <Foundation/Foundation.h>

#import "CDMConfig.h"

@interface CDMBaseService : NSObject <CDMService>

 {
    CDMConfig *_config;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSInteger serviceState; // ivar: _serviceState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *supportedCommands;


-(id)createErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
-(id)createSetupResponseCommand;
-(id)initWithConfig:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)handleCommand:(id)arg0 withCallback:(id)arg1 ;
-(void)publish:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)request:(id)arg0 withCallback:(id)arg1 ;


@end


#endif