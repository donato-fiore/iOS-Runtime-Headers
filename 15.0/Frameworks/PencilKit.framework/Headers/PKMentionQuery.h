// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMENTIONQUERY_H
#define PKMENTIONQUERY_H

@class NSSet;


#import "PKDetectionQuery.h"

@interface PKMentionQuery : PKDetectionQuery

@property (copy, nonatomic) NSSet *validSuffixes;


-(id)initWithRecognitionSessionManager:(id)arg0 ;
-(void)queryDidUpdateResult:(id)arg0 ;


@end


#endif