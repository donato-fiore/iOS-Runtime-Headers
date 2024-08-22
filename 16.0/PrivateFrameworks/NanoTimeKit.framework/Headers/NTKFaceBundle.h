// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACEBUNDLE_H
#define NTKFACEBUNDLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NTKFaceBundle : NSObject

@property (readonly, nonatomic) Class faceClass;
@property (readonly, nonatomic) Class faceViewClass;
@property (readonly, nonatomic) NSString *galleryDescriptionText;
@property (readonly, nonatomic) NSString *galleryTitle;


+(NSUInteger)argon_defaultNotificationAction;
+(id)_localizedStringForKey:(id)arg0 table:(id)arg1 suffix:(id)arg2 comment:(id)arg3 ;
+(id)analyticsIdentifier;
+(id)identifier;
+(id)imageWithName:(id)arg0 ;
+(id)localizedStringForKey:(id)arg0 comment:(id)arg1 ;
+(id)localizedStringForKey:(id)arg0 table:(id)arg1 comment:(id)arg2 ;
+(id)localizedStringForKey:(id)arg0 tableSuffix:(id)arg1 comment:(id)arg2 ;
+(id)logCategoryName;
+(id)logObject;
-(BOOL)isHardwareSpecific;
-(id)artistFacesForDevice:(id)arg0 ;
-(id)defaultFaceForDevice:(id)arg0 ;
-(id)galleryDefaultPigmentOptionsForDevice:(id)arg0 ;
-(id)galleryDescriptionForDevice:(id)arg0 ;
-(id)galleryFacesForDevice:(id)arg0 ;
-(id)galleryTitleForDevice:(id)arg0 ;
-(id)heroFacesForDevice:(id)arg0 ;
-(id)heroGloryBDefaultFacesForDevice:(id)arg0 ;
-(id)heroGloryEDefaultFacesForDevice:(id)arg0 ;
-(id)heroGloryFDefaultFacesForDevice:(id)arg0 ;
-(id)heroGraceDefaultFacesForDevice:(id)arg0 ;
-(id)heroLegacyDefaultFacesForDevice:(id)arg0 ;
-(id)heroPride2020DefaultFacesForDevice:(id)arg0 ;
-(id)heroSpring2020DefaultFacesForDevice:(id)arg0 ;
-(id)legacyFaceStyle;
-(id)prideFacesForDevice:(id)arg0 ;
-(id)unityFacesForDevice:(id)arg0 ;
-(void)argon_generateNotificationContentWithCompletion:(id)arg0 ;


@end


#endif