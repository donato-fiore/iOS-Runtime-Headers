// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUNITSTRINGENTITY_H
#define HDUNITSTRINGENTITY_H



#import "HDHealthEntity.h"

@interface HDUnitStringEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)storeUnitString:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif