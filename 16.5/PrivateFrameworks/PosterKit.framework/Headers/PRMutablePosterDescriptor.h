// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRMUTABLEPOSTERDESCRIPTOR_H
#define PRMUTABLEPOSTERDESCRIPTOR_H

@class NSString, NSArray;


#import "PRPosterDescriptor.h"
#import "PRPosterDescriptorGalleryOptions.h"
#import "PRPosterDescriptorHomeScreenConfiguration.h"

@interface PRMutablePosterDescriptor : PRPosterDescriptor

@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (copy, nonatomic) NSArray *preferredHomeScreenSolidColors;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;


+(id)mutableDescriptorWithIdentifier:(id)arg0 ;
-(BOOL)setObject:(id)arg0 forUserInfoKey:(id)arg1 ;
-(BOOL)storeConfigurableOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeGalleryOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeUserInfo:(id)arg0 error:(*id)arg1 ;


@end


#endif