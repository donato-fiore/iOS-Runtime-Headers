// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EARTOKENPRONOUNCIATIONS_H
#define EARTOKENPRONOUNCIATIONS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface EARTokenPronounciations : NSObject

@property (copy, nonatomic) NSArray *pronunciations; // ivar: _pronunciations
@property (copy, nonatomic) NSString *token; // ivar: _token


-(id)initWithToken:(id)arg0 pronunciations:(id)arg1 ;
-(struct TokenProns )_quasarProns;


@end


#endif