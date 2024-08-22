// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAPARAMCHECKER_H
#define LAPARAMCHECKER_H


#import <Foundation/Foundation.h>


@interface LAParamChecker : NSObject



+(id)_checkDictionary:(id)arg0 againstClassDictionary:(id)arg1 entryName:(id)arg2 customCheckBlock:(id)arg3 ;
+(id)_checkEventProcessing:(id)arg0 ;
+(id)_checkEventProcessingEventDictionary:(id)arg0 ;
+(id)_checkSet:(id)arg0 forValue:(id)arg1 entityName:(id)arg2 ;
+(id)checkACL:(id)arg0 ;
+(id)checkCredentialType:(NSInteger)arg0 ;
+(id)checkEvent:(NSInteger)arg0 ;
+(id)checkInternalOperation:(NSInteger)arg0 options:(id)arg1 ;
+(id)checkOptions:(id)arg0 ;
+(id)checkPolicy:(NSInteger)arg0 ;


@end


#endif