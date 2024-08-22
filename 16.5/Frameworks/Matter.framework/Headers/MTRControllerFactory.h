// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTROLLERFACTORY_H
#define MTRCONTROLLERFACTORY_H


#import <Foundation/Foundation.h>


@interface MTRControllerFactory : NSObject

@property (readonly, nonatomic) BOOL isRunning;


+(id)sharedInstance;
-(BOOL)startup:(id)arg0 ;
-(id)startControllerOnExistingFabric:(id)arg0 ;
-(id)startControllerOnNewFabric:(id)arg0 ;
-(void)shutdown;


@end


#endif