// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEWORDTIMINGINFO_H
#define FTMUTABLEWORDTIMINGINFO_H

@class NSString;


#import "FTWordTimingInfo.h"

@interface FTMutableWordTimingInfo : FTWordTimingInfo

@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int sample_idx;
@property (nonatomic) float timestamp;
@property (copy, nonatomic) NSString *word;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif