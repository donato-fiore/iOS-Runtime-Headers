// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPEOPLEINFERENCESCONVENIENCES_H
#define PGPEOPLEINFERENCESCONVENIENCES_H


#import <Foundation/Foundation.h>


@interface PGPeopleInferencesConveniences : NSObject



+(BOOL)anyPersonNodes:(id)arg0 belongToBestSocialGroupsInGraph:(id)arg1 ;
+(BOOL)isValidContact:(id)arg0 ;
+(BOOL)signalInRunOptions:(NSUInteger)arg0 signal:(NSUInteger)arg1 ;
+(BOOL)socialGroupNodes:(id)arg0 intersectWithBestSocialGroupsInGraph:(id)arg1 ;
+(id)countedPersonNodesFromMomentNodes:(id)arg0 amongPersonNodes:(id)arg1 ;
+(id)momentNodesAtHomeInMomentNodes:(id)arg0 ;
+(id)momentNodesAtWorkInMomentNodes:(id)arg0 ;
+(id)momentNodesByAddressNodeFromMomentNodes:(id)arg0 ;
+(id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)arg0 ;
+(id)topPersonNodeIdentifierForTwoPersonSocialGroupsFromPersonNodes:(id)arg0 personNodes:(id)arg1 ;


@end


#endif