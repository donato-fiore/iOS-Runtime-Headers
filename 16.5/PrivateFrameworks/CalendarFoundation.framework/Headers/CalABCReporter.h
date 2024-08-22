// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALABCREPORTER_H
#define CALABCREPORTER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CalABCReporter : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (retain, nonatomic) NSArray *events; // ivar: _events
@property (nonatomic) BOOL ignoreRateLimiting; // ivar: _ignoreRateLimiting
@property (retain, nonatomic) NSString *subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *subtypeContext; // ivar: _subtypeContext
@property (retain, nonatomic) NSString *type; // ivar: _type


-(BOOL)rateLimitingAllowsABCReport;
-(id)initWithType:(id)arg0 subtype:(id)arg1 context:(id)arg2 ;
-(void)report;


@end


#endif