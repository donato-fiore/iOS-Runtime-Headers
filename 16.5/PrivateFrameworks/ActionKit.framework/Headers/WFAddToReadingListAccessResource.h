// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFADDTOREADINGLISTACCESSRESOURCE_H
#define WFADDTOREADINGLISTACCESSRESOURCE_H

@class WFAccessResource;



@interface WFAddToReadingListAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;


@end


#endif