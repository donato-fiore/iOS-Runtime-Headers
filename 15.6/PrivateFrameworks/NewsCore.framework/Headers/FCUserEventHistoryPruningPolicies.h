// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUSEREVENTHISTORYPRUNINGPOLICIES_H
#define FCUSEREVENTHISTORYPRUNINGPOLICIES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FCUserEventHistoryPruningPolicies : NSObject

@property (retain, nonatomic) NSArray *policies; // ivar: _policies


+(id)defaultPolicy;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif