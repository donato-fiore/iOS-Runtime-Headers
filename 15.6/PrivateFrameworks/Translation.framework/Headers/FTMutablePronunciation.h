// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEPRONUNCIATION_H
#define FTMUTABLEPRONUNCIATION_H

@class NSString;


#import "FTPronunciation.h"

@interface FTMutablePronunciation : FTPronunciation

@property (copy, nonatomic) NSString *phonemes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif