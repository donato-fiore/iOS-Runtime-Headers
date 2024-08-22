// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEXCEPTIONDATECHANGE_H
#define EKEXCEPTIONDATECHANGE_H



#import "EKObjectChange.h"

@interface EKExceptionDateChange : EKObjectChange



+(int)entityType;
+(void)fetchExceptionDateChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchExceptionDateChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchExceptionDateChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif