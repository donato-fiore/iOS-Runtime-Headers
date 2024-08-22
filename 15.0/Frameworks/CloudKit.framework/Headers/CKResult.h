// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKRESULT_H
#define CKRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface CKResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) id *successValue; // ivar: _successValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithFailure:(id)arg0 ;
-(id)initWithSuccess:(id)arg0 ;


@end


#endif