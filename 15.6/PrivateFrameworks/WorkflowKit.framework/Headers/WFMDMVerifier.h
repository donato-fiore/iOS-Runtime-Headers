// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMDMVERIFIER_H
#define WFMDMVERIFIER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface WFMDMVerifier : NSObject

@property (readonly, copy, nonatomic) NSString *actionName; // ivar: _actionName
@property (readonly, copy, nonatomic) NSArray *contentAttributionSets; // ivar: _contentAttributionSets


+(id)contentAttributionsFromContentAttributionSets:(id)arg0 withManagedLevel:(NSUInteger)arg1 ;
-(BOOL)canSendDataToContentDestination:(id)arg0 error:(*id)arg1 ;
-(id)errorFromFailedVerificationContentAttributionSets:(id)arg0 contentDestination:(id)arg1 destinationManagedLevel:(NSUInteger)arg2 ;
-(id)initWithAction:(id)arg0 ;
-(id)initWithContentAttributionSets:(id)arg0 actionName:(id)arg1 ;


@end


#endif