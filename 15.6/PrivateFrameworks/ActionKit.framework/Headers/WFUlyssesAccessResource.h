// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFULYSSESACCESSRESOURCE_H
#define WFULYSSESACCESSRESOURCE_H

@class WFAccessResource, ICScheme;



@interface WFUlyssesAccessResource : WFAccessResource

@property (readonly, nonatomic) ICScheme *scheme; // ivar: _scheme


+(BOOL)refreshesAvailabilityOnApplicationResume;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)initWithDefinition:(id)arg0 ;
-(id)protectedResourceDescription;
-(void)dealloc;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif