// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSMIRESULTREGISTRANTSERVERDATABASECONTEXTPROVIDING_H
#define LSMIRESULTREGISTRANTSERVERDATABASECONTEXTPROVIDING_H

@class NSString;
@protocol LSMIResultRegistrantDatabaseContextProviding;

#import <Foundation/Foundation.h>


@interface LSMIResultRegistrantServerDatabaseContextProviding : NSObject <LSMIResultRegistrantDatabaseContextProviding>

 {
    Context _ctx;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)databaseContextWithError:(*id)arg0 ;
-(id)init;
-(void)armSaveTimerIfNecessary:(id)arg0 ;


@end


#endif