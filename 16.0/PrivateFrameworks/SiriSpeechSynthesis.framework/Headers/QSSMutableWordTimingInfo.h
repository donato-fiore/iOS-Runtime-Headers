// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLEWORDTIMINGINFO_H
#define QSSMUTABLEWORDTIMINGINFO_H

@class NSString;


#import "QSSWordTimingInfo.h"

@interface QSSMutableWordTimingInfo : QSSWordTimingInfo

@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int sample_idx;
@property (nonatomic) float timestamp;
@property (copy, nonatomic) NSString *word;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif