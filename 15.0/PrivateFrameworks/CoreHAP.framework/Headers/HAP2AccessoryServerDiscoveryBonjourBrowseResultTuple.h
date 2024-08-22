// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERDISCOVERYBONJOURBROWSERESULTTUPLE_H
#define HAP2ACCESSORYSERVERDISCOVERYBONJOURBROWSERESULTTUPLE_H

@protocol OS_nw_browse_result;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerDiscoveryBonjourBrowseResultTuple : NSObject

@property (readonly, nonatomic) NSUInteger changes; // ivar: _changes
@property (readonly, nonatomic) NSObject<OS_nw_browse_result> *currentResult; // ivar: _currentResult
@property (readonly, nonatomic) NSObject<OS_nw_browse_result> *previousResult; // ivar: _previousResult


-(id)initWithPreviousResult:(id)arg0 currentResult:(id)arg1 changes:(NSUInteger)arg2 ;


@end


#endif