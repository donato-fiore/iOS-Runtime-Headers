// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDATABASESTATEHANDLER_H
#define ICDATABASESTATEHANDLER_H

@class NSString;
@protocol ICStateHandlerProvider;

#import <Foundation/Foundation.h>


@interface ICDatabaseStateHandler : NSObject <ICStateHandlerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)miscState;
+(id)modernDatabaseState;
+(id)stateDictionary;
+(id)stateDictionaryFromLoggables:(id)arg0 ;
+(void)addLoggable:(id)arg0 toDictionary:(id)arg1 ;
+(void)registerStateHandler;


@end


#endif