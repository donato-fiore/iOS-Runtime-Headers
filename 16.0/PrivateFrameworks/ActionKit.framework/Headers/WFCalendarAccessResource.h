// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCALENDARACCESSRESOURCE_H
#define WFCALENDARACCESSRESOURCE_H

@class WFAccessResource;



@interface WFCalendarAccessResource : WFAccessResource



+(BOOL)isSystemResource;
+(NSUInteger)entityType;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif