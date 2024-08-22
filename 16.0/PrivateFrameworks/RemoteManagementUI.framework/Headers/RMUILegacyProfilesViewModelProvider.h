// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMUILEGACYPROFILESVIEWMODELPROVIDER_H
#define RMUILEGACYPROFILESVIEWMODELPROVIDER_H

@class RMObserverStore, NSMutableArray;

#import <Foundation/Foundation.h>


@interface RMUILegacyProfilesViewModelProvider : NSObject

@property (retain, nonatomic) RMObserverStore *observerStore; // ivar: _observerStore
@property (retain, nonatomic) NSMutableArray *profileViewModels; // ivar: _profileViewModels
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope


-(id)initWithScope:(NSInteger)arg0 ;
-(void)_updateViewModelsWithDeclarations:(id)arg0 ;
-(void)loadProfilesFromConfigurationsWithCompletionHandler:(id)arg0 ;


@end


#endif