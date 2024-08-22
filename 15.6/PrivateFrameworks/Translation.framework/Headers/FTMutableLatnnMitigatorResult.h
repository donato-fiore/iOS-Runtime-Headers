// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLELATNNMITIGATORRESULT_H
#define FTMUTABLELATNNMITIGATORRESULT_H

@class NSString;


#import "FTLatnnMitigatorResult.h"

@interface FTMutableLatnnMitigatorResult : FTLatnnMitigatorResult

@property (nonatomic) BOOL processed;
@property (nonatomic) CGFloat score;
@property (nonatomic) CGFloat threshold;
@property (copy, nonatomic) NSString *version;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif