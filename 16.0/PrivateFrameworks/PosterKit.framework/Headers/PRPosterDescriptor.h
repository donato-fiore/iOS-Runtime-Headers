// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERDESCRIPTOR_H
#define PRPOSTERDESCRIPTOR_H

@class PRSPosterPath, NSURL, NSString, NSArray;
@protocol PRPosterContentsInternal, PRPosterContents, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "PRPosterDescriptorGalleryOptions.h"
#import "PRPosterDescriptorHomeScreenConfiguration.h"

@interface PRPosterDescriptor : NSObject <PRPosterContentsInternal, PRPosterContents>

 {
    id<BSInvalidatable> *_pathValidityExtension;
}


@property (readonly, nonatomic) PRSPosterPath *_path; // ivar: _path
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (readonly, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (readonly, copy, nonatomic) NSArray *preferredHomeScreenSolidColors;
@property (readonly, copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (readonly, copy, nonatomic) NSArray *preferredTitleColors;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPath:(id)arg0 ;
-(id)init;
-(id)loadConfigurableOptionsWithError:(*id)arg0 ;
-(id)loadGalleryOptionsWithError:(*id)arg0 ;
-(id)loadUserInfoWithError:(*id)arg0 ;
-(id)objectForUserInfoKey:(id)arg0 ;
-(id)preferredTimeFontConfigurationsWithExtensionBundleURL:(id)arg0 ;
-(void)dealloc;


@end


#endif