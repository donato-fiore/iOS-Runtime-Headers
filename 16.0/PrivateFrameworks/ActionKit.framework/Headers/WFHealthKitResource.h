// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHEALTHKITRESOURCE_H
#define WFHEALTHKITRESOURCE_H

@class WFResource;



@interface WFHealthKitResource : WFResource



+(BOOL)isSingleton;
+(BOOL)mustBeAvailableForDisplay;
-(void)refreshAvailability;


@end


#endif