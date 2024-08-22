// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPLPRUNEREQUESTCOUNTER_H
#define _CPLPRUNEREQUESTCOUNTER_H

@class NSCountedSet, NSDate, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _CPLPruneRequestCounter : NSObject {
    NSCountedSet *_successStatsPerResourceType;
    NSCountedSet *_failedStatsPerResourceType;
    NSUInteger _successSize;
    NSDate *_lastRequestDate;
}


@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSDictionary *statusDictionary;
@property (readonly, nonatomic) NSString *statusKey; // ivar: _statusKey
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 statusKey:(id)arg1 ;
-(void)noteRequestForResource:(id)arg0 successful:(BOOL)arg1 prunedSize:(NSUInteger)arg2 ;


@end


#endif