// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMODELTYPEREGISTRY_H
#define MLMODELTYPEREGISTRY_H


#import <Foundation/Foundation.h>


@interface MLModelTypeRegistry : NSObject



+(id)sharedInstance;
-(Class)classForCompilingModelType:(int)arg0 ;
-(id)classesForLoadingModelType:(int)arg0 ;
-(id)classesForLoadingModelType:(int)arg0 isUpdatable:(BOOL)arg1 trainWithMLCompute:(BOOL)arg2 ;
-(id)init;
-(id)loadNeuralNetworkClasses:(BOOL)arg0 trainWithMLCompute:(BOOL)arg1 ;


@end


#endif