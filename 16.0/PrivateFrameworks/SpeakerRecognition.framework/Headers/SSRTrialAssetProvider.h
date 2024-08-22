// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRTRIALASSETPROVIDER_H
#define SSRTRIALASSETPROVIDER_H

@class NSString;
@protocol SSRAssetProviding;

#import <Foundation/Foundation.h>


@interface SSRTrialAssetProvider : NSObject <SSRAssetProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)getAssetProviderType;
-(id)init;
-(id)installedAssetOfType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
-(void)reloadForLocale:(id)arg0 ;


@end


#endif