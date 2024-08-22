// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLMODELTYPEREGISTRY_H
#define MLMODELTYPEREGISTRY_H


#import <Foundation/Foundation.h>


@interface MLModelTypeRegistry : NSObject



+(id)sharedInstance;
-(Class)classForCompilingModelType:(int)arg0 ;
-(Class)classForLoadingModelType:(int)arg0 ;
-(Class)classForLoadingModelType:(int)arg0 isUpdatable:(BOOL)arg1 trainWithMLCompute:(BOOL)arg2 ;
-(Class)loadNeuralNetworkClass:(BOOL)arg0 trainWithMLCompute:(BOOL)arg1 ;
-(id)init;


@end


#endif