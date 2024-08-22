// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFILTERREMEDIATIONVERDICT_H
#define NEFILTERREMEDIATIONVERDICT_H

@protocol NSSecureCoding, NSCopying;


#import "NEFilterVerdict.h"

@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>





+(id)allowVerdict;
+(id)dropVerdict;
+(id)needRulesVerdict;
-(NSInteger)filterAction;


@end


#endif