// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPGETROUTES_H
#define SAMPGETROUTES_H



#import "SADomainCommand.h"

@interface SAMPGetRoutes : SADomainCommand

@property (nonatomic) CGFloat routeTimeout;


+(id)getRoutes;
+(id)getRoutesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif