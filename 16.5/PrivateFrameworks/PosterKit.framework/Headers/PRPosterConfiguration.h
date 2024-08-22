// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERCONFIGURATION_H
#define PRPOSTERCONFIGURATION_H

@class PRSPosterPath, NSURL, NSString;
@protocol PRPosterContentsInternal, PRPosterContents, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PRPosterConfiguration : NSObject <PRPosterContentsInternal, PRPosterContents>

 {
    id<BSInvalidatable> *_pathValidityExtension;
}


@property (readonly, nonatomic) PRSPosterPath *_path; // ivar: _path
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPath:(id)arg0 ;
-(id)init;
-(id)loadComplicationLayoutWithError:(*id)arg0 ;
-(id)loadConfigurableOptionsWithError:(*id)arg0 ;
-(id)loadConfiguredPropertiesWithError:(*id)arg0 ;
-(id)loadFocusConfigurationWithError:(*id)arg0 ;
-(id)loadHomeScreenConfigurationWithError:(*id)arg0 ;
-(id)loadOtherMetadataWithError:(*id)arg0 ;
-(id)loadSuggestionMetadataWithError:(*id)arg0 ;
-(id)loadTitleStyleConfigurationWithError:(*id)arg0 ;
-(id)loadUserInfoWithError:(*id)arg0 ;
-(id)objectForUserInfoKey:(id)arg0 ;
-(void)_invalidate;
-(void)dealloc;


@end


#endif