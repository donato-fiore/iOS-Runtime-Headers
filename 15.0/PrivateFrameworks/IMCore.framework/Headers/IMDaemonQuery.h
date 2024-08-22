// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDAEMONQUERY_H
#define IMDAEMONQUERY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface IMDaemonQuery : NSObject

@property (readonly, copy, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)description;
-(id)initWithID:(id)arg0 key:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif