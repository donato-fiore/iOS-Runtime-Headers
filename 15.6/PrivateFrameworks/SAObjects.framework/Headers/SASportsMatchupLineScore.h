// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPORTSMATCHUPLINESCORE_H
#define SASPORTSMATCHUPLINESCORE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASportsMatchupLineScore : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *period;
@property (copy, nonatomic) NSString *score;
@property (readonly) Class superclass;


+(id)matchupLineScore;
+(id)matchupLineScoreWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif