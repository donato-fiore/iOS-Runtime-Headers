// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSABEKPARTICIPANTMATCHINGSEARCHOPERATIONDELEGATE_H
#define CNIOSABEKPARTICIPANTMATCHINGSEARCHOPERATIONDELEGATE_H

@class NSString;
@protocol ABPredicateDelegate;

#import <Foundation/Foundation.h>


@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject <ABPredicateDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)predicateShouldContinue:(id)arg0 ;
-(BOOL)predicateShouldContinue:(id)arg0 afterFindingRecord:(*void)arg1 ;


@end


#endif