// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONNECTIONSNAMEDENTITYSOURCE_H
#define PPCONNECTIONSNAMEDENTITYSOURCE_H

@class NSString;
@protocol PPConnectionsLocationSource;


#import "PPConnectionsSource.h"
#import "PPLocalNamedEntityStore.h"
#import "PPLocalContactStore.h"

@interface PPConnectionsNamedEntitySource : PPConnectionsSource <PPConnectionsLocationSource>

 {
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalContactStore *_contactStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)identifier;
-(id)initWithNamedEntityStore:(id)arg0 contactStore:(id)arg1 ;
-(id)locationItemsWithCriteria:(id)arg0 earliest:(id)arg1 latest:(id)arg2 limit:(NSUInteger)arg3 consumer:(NSUInteger)arg4 explanationSet:(id)arg5 ;


@end


#endif