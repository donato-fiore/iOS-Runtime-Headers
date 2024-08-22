// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DERESULT_H
#define DERESULT_H

@class NSNumber, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface DEResult : NSObject

@property (retain, nonatomic) NSNumber *elapsedTimeMs; // ivar: _elapsedTimeMs
@property (retain, nonatomic) NSNumber *elapsedTimeThreadMs; // ivar: _elapsedTimeThreadMs
@property (retain, nonatomic) NSString *error; // ivar: _error
@property (retain, nonatomic) NSString *json; // ivar: _json
@property (retain, nonatomic) NSDictionary *meta; // ivar: _meta
@property (retain, nonatomic) NSArray *response; // ivar: _response
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (retain, nonatomic) NSArray *visualRefs; // ivar: _visualRefs


-(id)initFromJson:(id)arg0 ;


@end


#endif