// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOPYCONFIGURATION_H
#define _UICOPYCONFIGURATION_H

@class NSArray, NSString;
@protocol _UICopyConfigurationReading;

#import <Foundation/Foundation.h>


@interface _UICopyConfiguration : NSObject <_UICopyConfigurationReading>

 {
    NSArray *_itemProviders;
}


@property (readonly, copy, nonatomic) NSArray *activityItemsForSharing;
@property (copy, nonatomic) id *activityItemsProvider; // ivar: _activityItemsProvider
@property (nonatomic) BOOL allowsSharing; // ivar: _allowsSharing
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForSharing;
@property (copy, nonatomic) id *applicationActivitiesProvider; // ivar: _applicationActivitiesProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForSharing;
@property (retain, nonatomic) id *localObject; // ivar: _localObject
@property (copy, nonatomic) id *metadataProvider; // ivar: _metadataProvider
@property (copy, nonatomic) id *previewProvider; // ivar: _previewProvider
@property (readonly) Class superclass;


+(id)copyConfigurationWithItemProviders:(id)arg0 ;
+(id)copyConfigurationWithSharedObjects:(id)arg0 ;
-(id)initWithItemProviders:(id)arg0 ;
-(id)initWithSharedObjects:(id)arg0 ;
-(id)itemProviders;
-(id)previewForSharedItemProviderAtIndex:(NSInteger)arg0 intent:(id)arg1 ;
-(id)sharingMetadataForKey:(id)arg0 ;


@end


#endif