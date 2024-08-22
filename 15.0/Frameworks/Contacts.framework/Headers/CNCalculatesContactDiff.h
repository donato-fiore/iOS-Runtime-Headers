// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCALCULATESCONTACTDIFF_H
#define CNCALCULATESCONTACTDIFF_H


#import <Foundation/Foundation.h>


@interface CNCalculatesContactDiff : NSObject



+(id)diffContact:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
+(void)addMultiValueUpdateTo:(id)arg0 forProperty:(id)arg1 contact1:(id)arg2 contact2:(id)arg3 ;
+(void)addSingleValueUpdateTo:(id)arg0 forProperty:(id)arg1 contact1:(id)arg2 contact2:(id)arg3 ;


@end


#endif