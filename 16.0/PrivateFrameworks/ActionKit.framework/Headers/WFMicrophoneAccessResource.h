// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMICROPHONEACCESSRESOURCE_H
#define WFMICROPHONEACCESSRESOURCE_H

@class WFAccessResource;



@interface WFMicrophoneAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)icon;
-(id)name;
-(id)protectedResourceDescription;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif