// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTAGRELATIONSHIPSOPERATION_H
#define FCTAGRELATIONSHIPSOPERATION_H

@protocol FCContentContext, FCTagProviding;


#import "FCOperation.h"
#import "FCTagRelationships.h"

@interface FCTagRelationshipsOperation : FCOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (retain, nonatomic) FCTagRelationships *resultTagRelationships; // ivar: _resultTagRelationships
@property (readonly, copy, nonatomic) NSObject<FCTagProviding> *tag; // ivar: _tag


-(id)initWithContext:(id)arg0 tag:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif