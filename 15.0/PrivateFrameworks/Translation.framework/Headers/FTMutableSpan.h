// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLESPAN_H
#define FTMUTABLESPAN_H

@class NSString;


#import "FTSpan.h"

@interface FTMutableSpan : FTSpan

@property (nonatomic) BOOL do_not_translate;
@property (nonatomic) int end_index;
@property (copy, nonatomic) NSString *meta_info;
@property (nonatomic) int start_index;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif