// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUFLIGHTFACTORY_H
#define FUFLIGHTFACTORY_H

@class NSString;
@protocol FUFlightFactoryInternalProtocol;

#import <Foundation/Foundation.h>


@interface FUFlightFactory : NSObject <FUFlightFactoryInternalProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)flightFactoryClassWithProvider:(id)arg0 ;
+(void)loadFlightDataWithFlightNumber:(NSUInteger)arg0 airlineCode:(id)arg1 date:(id)arg2 dateType:(NSInteger)arg3 completionHandler:(id)arg4 ;
+(void)loadFlightWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadFlightsWithNumber:(NSUInteger)arg0 airlineCode:(id)arg1 date:(id)arg2 dateType:(NSInteger)arg3 completionHandler:(id)arg4 ;
+(void)loadFlightsWithNumber:(NSUInteger)arg0 airlineCode:(id)arg1 date:(id)arg2 dateType:(NSInteger)arg3 userAgent:(id)arg4 sessionID:(id)arg5 completionHandler:(id)arg6 ;
-(id)parseFlightData:(id)arg0 withError:(*id)arg1 ;


@end


#endif