// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WHATDIDTHEYSAYINTENTRESPONSE_H
#define WHATDIDTHEYSAYINTENTRESPONSE_H

@class INIntentResponse;



@interface WhatDidTheySayIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code


-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertiesByName:(id)arg0 ;


@end


#endif