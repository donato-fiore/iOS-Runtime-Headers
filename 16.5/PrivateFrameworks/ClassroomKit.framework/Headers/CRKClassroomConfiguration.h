// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCLASSROOMCONFIGURATION_H
#define CRKCLASSROOMCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CRKClassroomConfiguration : NSObject



+(id)configurationSource;
+(id)setOfActiveRestrictionUUIDs:(id)arg0 ;
+(void)fetchConfiguration:(id)arg0 ;
+(void)setConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif