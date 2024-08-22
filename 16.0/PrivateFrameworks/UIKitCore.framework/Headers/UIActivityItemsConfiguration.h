// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACTIVITYITEMSCONFIGURATION_H
#define UIACTIVITYITEMSCONFIGURATION_H

@class NSArray, UIActivityViewController, NSString;
@protocol UIActivityItemsConfigurationReading;

#import <Foundation/Foundation.h>


@interface UIActivityItemsConfiguration : NSObject <UIActivityItemsConfigurationReading>

 {
    NSArray *_itemProviders;
    NSArray *_activityItems;
    UIActivityViewController *_vc;
    NSArray *_excludedActivityTypes;
}


@property (readonly, copy, nonatomic) NSArray *_activityItems;
@property (copy, nonatomic, setter=_setExcludedActivityTypes:) NSArray *_excludedActivityTypes;
@property (copy, nonatomic, setter=_setExcludedInteractions:) NSArray *_excludedInteractions; // ivar: __excludedInteractions
@property (readonly, nonatomic) BOOL _hasItemsForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (copy, nonatomic) id *applicationActivitiesProvider; // ivar: _applicationActivitiesProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (retain, nonatomic) id *localObject; // ivar: _localObject
@property (copy, nonatomic) id *metadataProvider; // ivar: _metadataProvider
@property (copy, nonatomic) id *perItemMetadataProvider; // ivar: _perItemMetadataProvider
@property (copy, nonatomic) id *previewProvider; // ivar: _previewProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedInteractions; // ivar: _supportedInteractions


+(id)_itemsForSystemSharingFromActivityItemsConfiguration:(id)arg0 wrapperBlock:(id)arg1 ;
+(id)activityItemsConfigurationWithItemProviders:(id)arg0 ;
+(id)activityItemsConfigurationWithObjects:(id)arg0 ;
-(BOOL)activityItemsConfigurationSupportsInteraction:(id)arg0 ;
-(id)_initWithActivityItemSources:(id)arg0 ;
-(id)_initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 ;
-(id)activityItemsConfigurationMetadataForItemAtIndex:(NSInteger)arg0 key:(id)arg1 ;
-(id)activityItemsConfigurationMetadataForKey:(id)arg0 ;
-(id)activityItemsConfigurationPreviewForItemAtIndex:(NSInteger)arg0 intent:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityItemsForSharing;
-(id)initWithItemProviders:(id)arg0 ;
-(id)initWithObjects:(id)arg0 ;
-(id)itemProviders;
-(void)_commonInit;


@end


#endif