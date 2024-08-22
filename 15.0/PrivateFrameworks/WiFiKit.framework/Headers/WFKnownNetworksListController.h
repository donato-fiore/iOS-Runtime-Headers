// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFKNOWNNETWORKSLISTCONTROLLER_H
#define WFKNOWNNETWORKSLISTCONTROLLER_H

@class NSString;
@protocol WFKnownNetworksViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "WFKnownNetworkStore.h"

@interface WFKnownNetworksListController : NSObject <WFKnownNetworksViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFKnownNetworkStore *knownNetworkStore; // ivar: _knownNetworkStore
@property (readonly) Class superclass;


-(BOOL)isNetworkBlacklisted:(id)arg0 ;
-(BOOL)isNetworkHidden:(id)arg0 ;
-(id)getDateAddedForNetwork:(id)arg0 ;
-(id)getDateLastJoinedForNetwork:(id)arg0 ;
-(id)getGeoTagsForNetwork:(id)arg0 ;
-(id)getKnownNetworksList;
-(id)getPasswordForNetwork:(id)arg0 ;
-(id)getScoreForNetwork:(id)arg0 ;
-(id)getSecurityTypeStringForNetwork:(id)arg0 ;
-(id)initWithKnownNetworkStore:(id)arg0 ;
-(void)pushKnownNetworksOnParentViewController:(id)arg0 ;
-(void)removeKnownNetworkWithSsid:(id)arg0 ;


@end


#endif