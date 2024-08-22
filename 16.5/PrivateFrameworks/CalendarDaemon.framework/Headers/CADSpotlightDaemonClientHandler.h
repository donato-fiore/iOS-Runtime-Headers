// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSPOTLIGHTDAEMONCLIENTHANDLER_H
#define CADSPOTLIGHTDAEMONCLIENTHANDLER_H

@protocol SpotlightDaemonClient;

#import <Foundation/Foundation.h>


@interface CADSpotlightDaemonClientHandler : NSObject <SpotlightDaemonClient>





-(id)textRepresentationForEvent:(*void)arg0 ;
-(void)provideDataForBundleID:(id)arg0 protectionClass:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)provideFileURLForBundleID:(id)arg0 protectionClass:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)reindexAllItemsForBundleID:(id)arg0 protectionClass:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)reindexItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id)arg3 ;
-(void)start;


@end


#endif