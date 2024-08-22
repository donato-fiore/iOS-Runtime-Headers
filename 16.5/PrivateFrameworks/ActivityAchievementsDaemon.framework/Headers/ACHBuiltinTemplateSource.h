// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHBUILTINTEMPLATESOURCE_H
#define ACHBUILTINTEMPLATESOURCE_H

@class NSString;
@protocol ACHTemplateSource, ACHTemplateAssetSource, ACHTemplateAssetSourceDelegate, ACHTemplateSourceDelegate;

#import <Foundation/Foundation.h>


@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateSource, ACHTemplateAssetSource>



@property (weak, nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSInteger runCadence;
@property (readonly) Class superclass;


-(BOOL)sourceShouldRunForDate:(id)arg0 ;
-(id)localizationBundleURLForTemplate:(id)arg0 ;
-(id)propertyListBundleURLForTemplate:(id)arg0 ;
-(id)resourceBundleURLForTemplate:(id)arg0 ;
-(id)stickerBundleURLForTemplate:(id)arg0 ;
-(void)templatesForDate:(id)arg0 completion:(id)arg1 ;


@end


#endif