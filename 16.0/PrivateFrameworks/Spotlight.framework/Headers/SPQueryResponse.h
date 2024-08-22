// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPQUERYRESPONSE_H
#define SPQUERYRESPONSE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SPQueryTask.h"

@interface SPQueryResponse : NSObject

@property (nonatomic) NSUInteger kind; // ivar: _kind
@property (retain, nonatomic) NSArray *resultSections; // ivar: _resultSections
@property (retain, nonatomic) NSString *sessionEntityString; // ivar: _sessionEntityString
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) SPQueryTask *task; // ivar: _task


-(id)copy;
-(id)description;
-(id)init;
-(id)initWithTask:(id)arg0 ;


@end


#endif