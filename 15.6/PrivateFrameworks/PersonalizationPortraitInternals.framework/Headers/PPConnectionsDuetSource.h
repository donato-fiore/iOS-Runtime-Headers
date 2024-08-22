// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONNECTIONSDUETSOURCE_H
#define PPCONNECTIONSDUETSOURCE_H

@class NSString;
@protocol PPConnectionsLocationSource;


#import "PPConnectionsSource.h"

@interface PPConnectionsDuetSource : PPConnectionsSource <PPConnectionsLocationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)duetUserActivitiesFromStreams:(id)arg0 limit:(NSUInteger)arg1 afterDate:(id)arg2 explanationSet:(id)arg3 ;
+(id)sharedInstance;
-(BOOL)isDuetEventAuthorized:(id)arg0 bundleID:(id)arg1 ;
-(BOOL)testMetadataForValidAddressAndNameWithEvent:(id)arg0 ;
-(id)duetLocationUserActivitiesWithLimit:(NSUInteger)arg0 afterDate:(id)arg1 explanationSet:(id)arg2 ;
-(id)duetLocationUserActivitiesWithLimit:(NSUInteger)arg0 explanationSet:(id)arg1 ;
-(id)identifier;
-(id)locationItemsWithCriteria:(id)arg0 earliest:(id)arg1 latest:(id)arg2 limit:(NSUInteger)arg3 consumer:(NSUInteger)arg4 explanationSet:(id)arg5 ;
-(id)locationItemsWithCriteria:(id)arg0 earliest:(id)arg1 latest:(id)arg2 limit:(NSUInteger)arg3 duetLimit:(NSInteger)arg4 consumer:(NSUInteger)arg5 richLocationItems:(BOOL)arg6 resolveEKLocations:(BOOL)arg7 explanationSet:(id)arg8 ;
-(id)supportedLocationFields;
-(id)whitespaceAndNewlineCharacterSet;


@end


#endif