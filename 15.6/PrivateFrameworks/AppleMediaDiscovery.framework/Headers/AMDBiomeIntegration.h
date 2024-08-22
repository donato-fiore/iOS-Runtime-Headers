// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDBIOMEINTEGRATION_H
#define AMDBIOMEINTEGRATION_H


#import <Foundation/Foundation.h>


@interface AMDBiomeIntegration : NSObject



+(id)deleteAll:(*id)arg0 ;
+(id)deleteDataOlderThan:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)deleteDataWithCommonPredicates:(id)arg0 error:(*id)arg1 ;
+(id)getStreamNameToTableMap;
+(id)updateDataFor:(id)arg0 error:(*id)arg1 ;


@end


#endif