// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDETECTEDFACEJOURNALENTRYPAYLOADDETECTIONTRAIT_H
#define PLDETECTEDFACEJOURNALENTRYPAYLOADDETECTIONTRAIT_H

@class NSString, NSDictionary;
@protocol PLDetectionTraitRebuildDescription;

#import <Foundation/Foundation.h>


@interface PLDetectedFaceJournalEntryPayloadDetectionTrait : NSObject <PLDetectionTraitRebuildDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *payloadAttributes; // ivar: _payloadAttributes
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly) Class superclass;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) short value;


-(id)initWithPayloadAttributes:(id)arg0 ;


@end


#endif