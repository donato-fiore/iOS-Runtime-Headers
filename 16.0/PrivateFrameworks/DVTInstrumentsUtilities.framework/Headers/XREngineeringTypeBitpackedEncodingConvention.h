// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRENGINEERINGTYPEBITPACKEDENCODINGCONVENTION_H
#define XRENGINEERINGTYPEBITPACKEDENCODINGCONVENTION_H

@class NSMutableArray, NSArray;


#import "XREngineeringTypeEncodingConvention.h"

@interface XREngineeringTypeBitpackedEncodingConvention : XREngineeringTypeEncodingConvention {
    NSMutableArray *_entries;
}


@property (readonly, nonatomic) NSArray *entries;


-(id)init;
-(void)addEntry:(id)arg0 ;


@end


#endif