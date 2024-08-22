// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPCORRELATIONTASK_H
#define ARPCORRELATIONTASK_H

@class NSString;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface ARPCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file; // ivar: _file
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore


-(id)initWithCorrelationsFile:(id)arg0 knowledgeStore:(id)arg1 ;
-(id)longFormVideoAppBundleIDs;
-(void)execute;


@end


#endif