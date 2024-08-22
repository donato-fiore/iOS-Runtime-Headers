// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBTABLE_H
#define WBTABLE_H


#import <Foundation/Foundation.h>


@interface WBTable : NSObject



+(BOOL)isTableFloating:(*void)arg0 tracked:(*void)arg1 ;
+(BOOL)tryToReadRowFrom:(id)arg0 textRuns:(id)arg1 to:(id)arg2 ;
+(void)initPropertiesFrom:(id)arg0 to:(id)arg1 in:(id)arg2 ;
+(void)readFrom:(id)arg0 textRuns:(id)arg1 table:(id)arg2 ;
+(void)readRowFrom:(id)arg0 textRuns:(id)arg1 to:(id)arg2 ;


@end


#endif