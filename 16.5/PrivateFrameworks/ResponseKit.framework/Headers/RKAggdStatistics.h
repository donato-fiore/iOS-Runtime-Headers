// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RKAGGDSTATISTICS_H
#define RKAGGDSTATISTICS_H


#import <Foundation/Foundation.h>


@interface RKAggdStatistics : NSObject



+(void)clearScalarValuesForLanguage:(id)arg0 ;
+(void)decrementAggdKeyForCategory:(id)arg0 forAction:(id)arg1 withLanguageID:(id)arg2 ;
+(void)incrementAggdKeyForCategory:(id)arg0 forAction:(id)arg1 withLanguageID:(id)arg2 ;


@end


#endif