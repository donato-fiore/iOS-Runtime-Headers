// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNOTESACCESSRESOURCE_H
#define WFNOTESACCESSRESOURCE_H

@class WFAccessResource;



@interface WFNotesAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;


@end


#endif