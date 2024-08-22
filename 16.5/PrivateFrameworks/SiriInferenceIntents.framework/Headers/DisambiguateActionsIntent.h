// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DISAMBIGUATEACTIONSINTENT_H
#define DISAMBIGUATEACTIONSINTENT_H

@class INIntent, NSString;



@interface DisambiguateActionsIntent : INIntent

@property (nonatomic, copy) NSString *candidateActions;
@property (nonatomic, copy) NSString *candidateBundles;
@property (nonatomic, copy) NSString *selectedCandidateIndex;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif