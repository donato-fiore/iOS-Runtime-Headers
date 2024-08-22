// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDEFAULTSPAYLOAD_H
#define MCDEFAULTSPAYLOAD_H

@class NSDictionary;


#import "MCPayload.h"

@interface MCDefaultsPayload : MCPayload {
    NSDictionary *_defaultsByDomain;
}




+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isAllowedToWriteDefaults;
-(id)defaultsForDomain:(id)arg0 ;
-(id)domains;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;
-(id)title;
-(id)verboseDescription;


@end


#endif