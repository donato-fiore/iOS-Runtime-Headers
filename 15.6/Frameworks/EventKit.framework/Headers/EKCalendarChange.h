// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARCHANGE_H
#define EKCALENDARCHANGE_H



#import "EKObjectChange.h"

@interface EKCalendarChange : EKObjectChange

@property (readonly, nonatomic) BOOL colorChanged; // ivar: _colorChanged
@property (readonly, nonatomic) BOOL orderChanged; // ivar: _orderChanged
@property (readonly, nonatomic) BOOL titleChanged; // ivar: _titleChanged


+(int)entityType;
+(void)fetchCalendarChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchCalendarChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif