// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFITEMBUILDER_H
#define HFITEMBUILDER_H

@class HMHome;

#import <Foundation/Foundation.h>


@interface HFItemBuilder : NSObject

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) id *homeKitRepresentation; // ivar: _homeKitRepresentation


-(id)_commitSetDiff:(id)arg0 withBlock:(id)arg1 ;
-(id)_failureFutureWithReason:(id)arg0 ;
-(id)commitItem;
// -(id)commitItemBuilderSetDiff:(id)arg0 addBlock:(id)arg1 deleteBlock:(unk)arg2  ;
// -(id)commitSetDiff:(id)arg0 addBlock:(id)arg1 updateBlock:(unk)arg2 deleteBlock:(id)arg3  ;
-(id)init;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)verifyNameIsNotEmpty:(id)arg0 ;
-(id)verifyPropertiesAreSet:(id)arg0 ;
// -(id)verifyProperty:(id)arg0 matchesCondition:(id)arg1 description:(unk)arg2  ;
-(id)verifyPropertyIsSet:(id)arg0 ;


@end


#endif