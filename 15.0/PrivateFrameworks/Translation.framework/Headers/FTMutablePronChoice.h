// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEPRONCHOICE_H
#define FTMUTABLEPRONCHOICE_H

@class NSString;


#import "FTPronChoice.h"

@interface FTMutablePronChoice : FTPronChoice

@property (nonatomic) float log_weight;
@property (copy, nonatomic) NSString *pron_sequence;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif