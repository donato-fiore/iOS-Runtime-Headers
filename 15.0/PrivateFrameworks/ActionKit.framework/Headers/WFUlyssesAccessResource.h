// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFULYSSESACCESSRESOURCE_H
#define WFULYSSESACCESSRESOURCE_H

@class WFAccessResource, ICScheme;



@interface WFUlyssesAccessResource : WFAccessResource

@property (readonly, nonatomic) ICScheme *scheme; // ivar: _scheme


+(BOOL)refreshesAvailabilityOnApplicationResume;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)initWithDefinition:(id)arg0 ;
-(id)protectedResourceDescription;
-(void)dealloc;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif