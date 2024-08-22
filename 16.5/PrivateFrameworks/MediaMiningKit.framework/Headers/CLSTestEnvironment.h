// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSTESTENVIRONMENT_H
#define CLSTESTENVIRONMENT_H


#import <Foundation/Foundation.h>


@interface CLSTestEnvironment : NSObject



+(id)test_cacheBusinessItem:(id)arg0 ;
+(id)test_locationOfInterestAndVisitFromDictionary:(id)arg0 ;
+(id)test_placemarkWithData:(id)arg0 ;
+(id)test_publicEventManagerWithQueryRadius:(CGFloat)arg0 invalidateCache:(BOOL)arg1 ;
+(void)test_routineAddLocationOfInterest:(id)arg0 ;
+(void)test_setMePersonIdentity:(id)arg0 ;


@end


#endif