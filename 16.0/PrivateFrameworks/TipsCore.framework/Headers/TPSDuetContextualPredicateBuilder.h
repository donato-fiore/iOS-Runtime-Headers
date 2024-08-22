// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSDUETCONTEXTUALPREDICATEBUILDER_H
#define TPSDUETCONTEXTUALPREDICATEBUILDER_H

@class NSString;
@protocol TPSDuetContextualPredicateProtocol;

#import <Foundation/Foundation.h>


@interface TPSDuetContextualPredicateBuilder : NSObject <TPSDuetContextualPredicateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contextualPredicateForDeliveryDuetEvent:(id)arg0 ;


@end


#endif