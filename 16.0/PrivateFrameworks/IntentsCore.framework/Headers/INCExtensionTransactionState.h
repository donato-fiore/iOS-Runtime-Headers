// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCEXTENSIONTRANSACTIONSTATE_H
#define INCEXTENSIONTRANSACTIONSTATE_H

@class INIntent, INIntentResponse, NSSet;

#import <Foundation/Foundation.h>


@interface INCExtensionTransactionState : NSObject

@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) INIntentResponse *intentResponse; // ivar: _intentResponse
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSSet *userActivities; // ivar: _userActivities


-(id)description;
-(id)initWithType:(NSInteger)arg0 intent:(id)arg1 intentResponse:(id)arg2 userActivities:(id)arg3 ;


@end


#endif