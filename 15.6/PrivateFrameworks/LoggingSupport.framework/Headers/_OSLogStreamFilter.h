// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _OSLOGSTREAMFILTER_H
#define _OSLOGSTREAMFILTER_H

@class NSMutableDictionary, NSData;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor>

 {
    NSMutableDictionary *_filter;
    NSMutableDictionary *_pids;
    NSMutableDictionary *_processes;
    NSMutableDictionary *_processImagePaths;
    NSMutableDictionary *_subsystems;
    NSMutableDictionary *_categories;
}


@property (readonly, nonatomic) NSData *data;


-(NSUInteger)flagsForPredicate:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)addCategory:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)addProcess:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)addProcessID:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)addProcessImagePath:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)addSubsystem:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)processComparisonPredicate:(id)arg0 ;
-(void)processLeftExpression:(id)arg0 andRightExpression:(id)arg1 flags:(NSUInteger)arg2 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif