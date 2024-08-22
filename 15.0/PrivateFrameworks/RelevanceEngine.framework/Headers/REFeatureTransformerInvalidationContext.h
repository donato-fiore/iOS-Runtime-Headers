// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REFEATURETRANSFORMERINVALIDATIONCONTEXT_H
#define REFEATURETRANSFORMERINVALIDATIONCONTEXT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface REFeatureTransformerInvalidationContext : NSObject

@property (readonly, nonatomic) NSDate *invalidationDate; // ivar: _invalidationDate


-(void)invalidateAtDate:(id)arg0 ;


@end


#endif