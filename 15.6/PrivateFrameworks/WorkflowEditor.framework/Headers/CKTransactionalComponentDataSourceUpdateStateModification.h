// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCEUPDATESTATEMODIFICATION_H
#define CKTRANSACTIONALCOMPONENTDATASOURCEUPDATESTATEMODIFICATION_H

@class NSString;
@protocol CKTransactionalComponentDataSourceStateModifying;

#import <Foundation/Foundation.h>


@interface CKTransactionalComponentDataSourceUpdateStateModification : NSObject <CKTransactionalComponentDataSourceStateModifying>

 {
    unordered_map<int, std::unordered_multimap<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::unordered_multimap<int, id (^)(id)>>>> _stateUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)changeFromState:(id)arg0 ;
-(id)initWithStateUpdates:(*void)arg0 ;


@end


#endif