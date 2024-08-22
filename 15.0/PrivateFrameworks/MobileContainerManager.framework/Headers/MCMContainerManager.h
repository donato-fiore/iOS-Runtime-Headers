// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCMCONTAINERMANAGER_H
#define MCMCONTAINERMANAGER_H


#import <Foundation/Foundation.h>


@interface MCMContainerManager : NSObject



+(id)defaultManager;
-(BOOL)replaceContainer:(id)arg0 withContainer:(id)arg1 error:(*id)arg2 ;
-(BOOL)replaceContainer:(id)arg0 withContainer:(id)arg1 error:(*id)arg2 withCompletion:(id)arg3 ;
-(id)_containersWithClass:(NSInteger)arg0 temporary:(BOOL)arg1 error:(*id)arg2 ;
-(id)containerWithContentClass:(NSInteger)arg0 identifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(*BOOL)arg3 error:(*id)arg4 ;
-(id)containerWithContentClass:(NSInteger)arg0 identifier:(id)arg1 error:(*id)arg2 ;
-(id)containersWithClass:(NSInteger)arg0 error:(*id)arg1 ;
-(id)deleteContainers:(id)arg0 withCompletion:(id)arg1 ;
-(id)init;
-(id)temporaryContainerWithContentClass:(NSInteger)arg0 identifier:(id)arg1 existed:(*BOOL)arg2 error:(*id)arg3 ;
-(id)temporaryContainersWithClass:(NSInteger)arg0 error:(*id)arg1 ;


@end


#endif