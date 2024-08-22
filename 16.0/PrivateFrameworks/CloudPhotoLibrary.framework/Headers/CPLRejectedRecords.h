// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLREJECTEDRECORDS_H
#define CPLREJECTEDRECORDS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)rejectsTheSameRecordsAs:(id)arg0 ;
-(NSUInteger)count;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)recordWithScopedIdentifier:(id)arg0 ;
-(id)rejectedDescriptions;
-(void)enumerateRecordsAndReasonsUsingBlock:(id)arg0 ;
-(void)removeRejectedRecordsWithScopedIdentifiers:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif