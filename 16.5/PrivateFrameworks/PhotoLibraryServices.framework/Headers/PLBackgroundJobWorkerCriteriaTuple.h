// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBWORKERCRITERIATUPLE_H
#define PLBACKGROUNDJOBWORKERCRITERIATUPLE_H


#import <Foundation/Foundation.h>

#import "PLBackgroundJobCriteria.h"
#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobWorkerCriteriaTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria; // ivar: _criteria
@property (readonly, nonatomic) PLBackgroundJobWorker *worker; // ivar: _worker


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithWorker:(id)arg0 withCriteria:(id)arg1 ;


@end


#endif