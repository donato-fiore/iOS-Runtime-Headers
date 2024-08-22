// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTOOLSUPPORTSERVICE_H
#define CHSTOOLSUPPORTSERVICE_H

@protocol CHSChronoToolServiceServer;

#import <Foundation/Foundation.h>


@interface CHSToolSupportService : NSObject

@property (readonly, nonatomic) NSObject<CHSChronoToolServiceServer> *server; // ivar: _server


-(id)init;
-(id)initWithServer:(id)arg0 ;
-(void)cacheDescriptorsForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)expireLocationGracePeriods;
-(void)extensionInfo:(id)arg0 ;
-(void)extensionInfoForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchStateForItemWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchStateWithCompletion:(id)arg0 ;
-(void)listStateCaptureIdentifiersWithCompletion:(id)arg0 ;
-(void)reloadTimelinesOfKind:(id)arg0 containedIn:(id)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)resetCaches:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)timelineForWidgetKey:(id)arg0 completion:(id)arg1 ;
-(void)widgetsWithTimelines:(id)arg0 ;


@end


#endif