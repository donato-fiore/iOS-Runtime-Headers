// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUIAPPICONDATASOURCE_H
#define APUIAPPICONDATASOURCE_H

@class NSString;
@protocol SBLeafIconDataSource, APUIAppIconDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface APUIAppIconDataSource : NSObject <SBLeafIconDataSource>



@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APUIAppIconDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


+(id)_appClipIconForIdentifier:(id)arg0 ;
+(id)_appClipIconTreatmentForCGImage:(struct CGImage *)arg0 ;
+(id)iconForBundleIdentifier:(id)arg0 shouldApplyMask:(BOOL)arg1 ;
+(void)openApplication:(id)arg0 completion:(id)arg1 ;
-(BOOL)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)icon:(id)arg0 unmaskedImageWithInfo:(struct SBIconImageInfo )arg1 ;


@end


#endif