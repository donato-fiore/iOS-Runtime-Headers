// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATARBITRATOR_H
#define CATARBITRATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CATArbitrator : NSObject {
    NSMutableDictionary *mRegistrationByKey;
}




-(NSUInteger)unregisterResourceForKey:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)resourceForKey:(id)arg0 exclusive:(BOOL)arg1 ;
-(id)resourcesForKeys:(id)arg0 exclusive:(BOOL)arg1 ;
-(id)waitForResourcesForKeys:(id)arg0 exclusive:(BOOL)arg1 delegateQueue:(id)arg2 completionBlock:(id)arg3 ;
-(void)registerResource:(id)arg0 forKey:(id)arg1 ;
-(void)registerResource:(id)arg0 forKey:(id)arg1 maxConcurrentCount:(NSUInteger)arg2 ;
-(void)stopWaiting:(id)arg0 ;


@end


#endif