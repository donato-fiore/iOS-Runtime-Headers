// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICORECONTACTMATCHER_H
#define CNUICORECONTACTMATCHER_H


#import <Foundation/Foundation.h>


@interface CNUICoreContactMatcher : NSObject



+(BOOL)doesContact:(id)arg0 matchAnyParentOrGuardianInFamily:(id)arg1 ;
+(BOOL)doesContact:(id)arg0 matchContact:(id)arg1 ;
+(BOOL)doesNameOfContact:(id)arg0 matchNameOfContact:(id)arg1 ;
+(BOOL)doesNameOfContact:(id)arg0 matchNameOfFamilyMember:(id)arg1 ;
+(id)nameFromFammilyMember:(id)arg0 ;


@end


#endif