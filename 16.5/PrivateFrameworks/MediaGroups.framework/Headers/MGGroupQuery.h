// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGGROUPQUERY_H
#define MGGROUPQUERY_H

@class NSPredicate, NSUUID;

#import <Foundation/Foundation.h>

#import "MGClientService.h"

@interface MGGroupQuery : NSObject

@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSUUID *query; // ivar: _query
@property (readonly, nonatomic) MGClientService *service; // ivar: _service
@property (readonly, copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(id)queryWithPredicate:(id)arg0 updateHandler:(id)arg1 ;
-(id)initWithConnectionProvider:(id)arg0 predicate:(id)arg1 updateHandler:(id)arg2 ;
-(id)initWithPredicate:(id)arg0 updateHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif