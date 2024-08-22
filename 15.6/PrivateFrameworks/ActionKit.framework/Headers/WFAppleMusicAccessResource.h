// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAPPLEMUSICACCESSRESOURCE_H
#define WFAPPLEMUSICACCESSRESOURCE_H

@class WFAccessResource;



@interface WFAppleMusicAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)initWithDefinition:(id)arg0 ;
-(id)protectedResourceDescription;
-(void)dealloc;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif