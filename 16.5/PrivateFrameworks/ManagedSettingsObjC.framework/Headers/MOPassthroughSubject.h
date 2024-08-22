// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOPASSTHROUGHSUBJECT_H
#define MOPASSTHROUGHSUBJECT_H

@class NSMutableDictionary;


#import "MOSubject.h"

@interface MOPassthroughSubject : MOSubject

@property (readonly, nonatomic) NSMutableDictionary *downstreams; // ivar: _downstreams


+(id)new;
-(BOOL)hasSubscriptionWithIdentifier:(id)arg0 ;
-(id)init;
-(void)disassociate:(id)arg0 ;
-(void)sendCompletion:(id)arg0 ;
-(void)sendValue:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif