// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAAPPLICATIONPROPERTIESPROVIDER_H
#define TSAAPPLICATIONPROPERTIESPROVIDER_H

@class TSDApplicationPropertiesProvider, NSString, NSArray;



@interface TSAApplicationPropertiesProvider : TSDApplicationPropertiesProvider

@property (readonly, nonatomic) NSString *appTextDefaultsKey;
@property (readonly, nonatomic) NSArray *importableDocumentTypes;
@property (readonly, nonatomic) NSArray *nativeDocumentTypes;
@property (readonly, nonatomic) NSString *nativeSFFDocumentType;
@property (readonly, nonatomic) NSArray *readableDocumentTypes;
@property (readonly, nonatomic) BOOL supportsTabNavigationOfCanvasObjects;
@property (readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property (readonly, nonatomic) NSString *templateDocumentExtension;
@property (readonly, nonatomic) NSString *templateDocumentType;
@property (readonly, nonatomic) NSString *templateSFFDocumentType;


-(BOOL)isReadableDocumentType:(id)arg0 ;
-(BOOL)supportsWebVideos;
-(NSUInteger)webVideoRequiredDocumentWriteVersion;
-(id)appTextDefaults;
-(id)iWorkTextDefaultsPassphraseVerifier;
-(void)setAppTextDefaults:(id)arg0 passphraseVerifier:(id)arg1 ;


@end


#endif