// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMLOGEVENTTAGPROCESSOR_H
#define HMMLOGEVENTTAGPROCESSOR_H

@class NSString, NSDictionary;
@protocol HMMTagSessionProcessing, HMMLogEventSubmitting;

#import <Foundation/Foundation.h>

#import "HMMLogEvent.h"

@interface HMMLogEventTagProcessor : NSObject <HMMTagSessionProcessing>



@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastUpdate; // ivar: _lastUpdate
@property (readonly, nonatomic) HMMLogEvent *logEvent; // ivar: _logEvent
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *submitter; // ivar: _submitter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *tagProcessingBlocks;


-(id)initWithSubmitter:(id)arg0 ;
-(void)closeForReason:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif