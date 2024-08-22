// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKALARMSEMANTICIDENTIFIERGENERATOR_H
#define EKALARMSEMANTICIDENTIFIERGENERATOR_H


#import <Foundation/Foundation.h>


@interface EKAlarmSemanticIdentifierGenerator : NSObject



+(id)_stringForAlarmProximity:(NSInteger)arg0 ;
+(id)semanticIdentifierForAlarm:(id)arg0 ;
+(id)semanticIdentifierForAlarmIsDefault:(BOOL)arg0 absoluteDate:(id)arg1 relativeOffset:(id)arg2 emailAddress:(id)arg3 url:(id)arg4 ;


@end


#endif