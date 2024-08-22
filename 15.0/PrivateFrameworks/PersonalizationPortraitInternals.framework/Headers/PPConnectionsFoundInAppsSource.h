// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCONNECTIONSFOUNDINAPPSSOURCE_H
#define PPCONNECTIONSFOUNDINAPPSSOURCE_H

@class NSString;
@protocol PPConnectionsLocationSource, SGSuggestionsServiceURLsProtocol;


#import "PPConnectionsSource.h"

@interface PPConnectionsFoundInAppsSource : PPConnectionsSource <PPConnectionsLocationSource>

 {
    id<SGSuggestionsServiceURLsProtocol> *_fiaURLService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)identifier;
-(id)init;
-(id)initWithFoundInAppsService:(id)arg0 ;
-(id)locationItemsWithCriteria:(id)arg0 earliest:(id)arg1 latest:(id)arg2 limit:(NSUInteger)arg3 consumer:(NSUInteger)arg4 explanationSet:(id)arg5 ;


@end


#endif