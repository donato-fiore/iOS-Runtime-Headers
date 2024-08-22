// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDMODELSTORE_H
#define AMDMODELSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AMDModelStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *allTheModels; // ivar: _allTheModels


-(id)getLocalModelWithId:(id)arg0 ;
-(id)init;
-(id)modelForId:(id)arg0 ;
-(short)getLatestVersionAvailableForModelWithId:(id)arg0 andFormat:(id)arg1 withURLBag:(id)arg2 ;
-(void)downloadLatestModelWithId:(id)arg0 andFormat:(id)arg1 greaterThanVersion:(short)arg2 withURLBag:(id)arg3 withDelegate:(id)arg4 ;
-(void)loadAllModels:(id)arg0 ;
-(void)refreshModelWithId:(id)arg0 andFormat:(id)arg1 ifGreaterThanVersion:(short)arg2 withDelegate:(id)arg3 ;
-(void)refreshModelWithId:(id)arg0 andFormat:(id)arg1 withDelegate:(id)arg2 ;


@end


#endif