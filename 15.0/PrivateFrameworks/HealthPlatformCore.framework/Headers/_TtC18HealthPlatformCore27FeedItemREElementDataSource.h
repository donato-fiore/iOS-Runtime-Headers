// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHPLATFORMCORE27FEEDITEMREELEMENTDATASOURCE_H
#define _TTC18HEALTHPLATFORMCORE27FEEDITEMREELEMENTDATASOURCE_H

@class REElementDataSource, NSArray;



@interface _TtC18HealthPlatformCore27FeedItemREElementDataSource : REElementDataSource {
    ? store;
    ? sourceProfiles;
}


@property (nonatomic, readonly) NSArray *supportedSections;


+(id)applicationBundleIdentifier;
+(id)bundleIdentifier;
+(id)contentAttributes;
-(id)init;
-(void)getElementsInSection:(id)arg0 withHandler:(id)arg1 ;


@end


#endif