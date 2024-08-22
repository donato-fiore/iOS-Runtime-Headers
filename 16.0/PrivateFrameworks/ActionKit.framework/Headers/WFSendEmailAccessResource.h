// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSENDEMAILACCESSRESOURCE_H
#define WFSENDEMAILACCESSRESOURCE_H

@class WFAccessResource;



@interface WFSendEmailAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;


@end


#endif