// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCALCULATESCONTACTDIFF_H
#define CNCALCULATESCONTACTDIFF_H


#import <Foundation/Foundation.h>


@interface CNCalculatesContactDiff : NSObject



+(BOOL)shouldSaveDuplicateProperty:(id)arg0 value1:(id)arg1 value2:(id)arg2 ;
+(id)diffContact:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
+(void)addMultiValueUpdateTo:(id)arg0 forProperty:(id)arg1 contact1:(id)arg2 contact2:(id)arg3 ;
+(void)addSingleValueUpdateTo:(id)arg0 forProperty:(id)arg1 contact1:(id)arg2 contact2:(id)arg3 ;
+(void)cleanOrphanedCropUpdates:(id)arg0 withContact1:(id)arg1 contact2:(id)arg2 ;


@end


#endif