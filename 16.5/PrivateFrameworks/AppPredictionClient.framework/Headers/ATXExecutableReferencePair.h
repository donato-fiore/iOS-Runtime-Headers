// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXEXECUTABLEREFERENCEPAIR_H
#define ATXEXECUTABLEREFERENCEPAIR_H


#import <Foundation/Foundation.h>

#import "ATXExecutableIdentifier.h"
#import "ATXExecutableReference.h"

@interface ATXExecutableReferencePair : NSObject

@property (readonly, nonatomic) ATXExecutableIdentifier *executable; // ivar: _executable
@property (readonly, nonatomic) ATXExecutableReference *reference; // ivar: _reference


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithReference:(id)arg0 executable:(id)arg1 ;


@end


#endif