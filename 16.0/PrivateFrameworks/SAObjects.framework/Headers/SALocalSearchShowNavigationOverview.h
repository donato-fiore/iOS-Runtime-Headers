// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHSHOWNAVIGATIONOVERVIEW_H
#define SALOCALSEARCHSHOWNAVIGATIONOVERVIEW_H



#import "SADomainCommand.h"

@interface SALocalSearchShowNavigationOverview : SADomainCommand



+(id)showNavigationOverview;
+(id)showNavigationOverviewWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif