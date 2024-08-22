// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUFLIGHTFACTORY_PARSEC_H
#define FUFLIGHTFACTORY_PARSEC_H

@class NSString;
@protocol FUFlightFactoryInternalProtocol;


#import "FUFlightFactory.h"

@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)loadFlightStructuresWithFlightNumber:(NSUInteger)arg0 airlineCode:(id)arg1 date:(id)arg2 dateType:(NSInteger)arg3 userAgent:(id)arg4 sessionID:(id)arg5 completionHandler:(id)arg6 ;
+(void)loadFlightsWithNumber:(NSUInteger)arg0 airlineCode:(id)arg1 date:(id)arg2 dateType:(NSInteger)arg3 userAgent:(id)arg4 sessionID:(id)arg5 completionHandler:(id)arg6 ;


@end


#endif