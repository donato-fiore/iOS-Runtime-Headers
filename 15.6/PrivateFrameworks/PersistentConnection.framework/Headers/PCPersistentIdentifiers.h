// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCPERSISTENTIDENTIFIERS_H
#define PCPERSISTENTIDENTIFIERS_H


#import <Foundation/Foundation.h>


@interface PCPersistentIdentifiers : NSObject



+(NSUInteger)hostUniqueIdentifier;
+(id)_processNamePrefix;
+(id)processNameAndPidIdentifier;
+(id)processNamePidAndStringIdentifier:(id)arg0 ;
+(int)pidFromMatchingIdentifer:(id)arg0 ;


@end


#endif