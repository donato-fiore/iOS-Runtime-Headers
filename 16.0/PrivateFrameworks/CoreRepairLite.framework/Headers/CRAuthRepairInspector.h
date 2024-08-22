// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRAUTHREPAIRINSPECTOR_H
#define CRAUTHREPAIRINSPECTOR_H


#import <Foundation/Foundation.h>


@interface CRAuthRepairInspector : NSObject



+(BOOL)checkMismatch:(id)arg0 failureDataList:(id)arg1 ;
+(BOOL)hasAnyMismatched:(id)arg0 success:(*BOOL)arg1 ;
+(BOOL)wasRepaired:(*BOOL)arg0 ;
+(NSUInteger)_getStatus;
+(NSUInteger)getStatus;


@end


#endif