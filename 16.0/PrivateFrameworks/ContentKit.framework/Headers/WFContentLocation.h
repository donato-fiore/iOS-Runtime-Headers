// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTLOCATION_H
#define WFCONTENTLOCATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFContentLocation : NSObject <NSSecureCoding, NSCopying, WFSerializableContent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSUInteger promptingBehaviour; // ivar: _promptingBehaviour
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)airdropLocation;
+(id)allContentLocationClasses;
+(id)appDescriptorForFileProviderHandlingURL:(id)arg0 error:(*id)arg1 ;
+(id)appleScriptLocation;
+(id)clipboardLocation;
+(id)contentLocationForFile:(id)arg0 ;
+(id)focusLocation;
+(id)genericLocation;
+(id)javaScriptForAutomationLocation;
+(id)locationLocation;
+(id)locationWithCalendarSource:(id)arg0 ;
+(id)locationWithNotesAccountIdentifier:(id)arg0 ;
+(id)microphoneLocation;
+(id)networkLocation;
+(id)notificationLocation;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)onScreenContentLocation;
+(id)printLocation;
+(id)screenshotLocation;
+(id)shareExtensionLocation;
+(id)shellLocation;
+(id)shortcutsAppLocation;
+(id)speechRecognitionLocation;
+(id)wallpaperLocation;
+(id)webpagesLocation;
+(id)windowsLocation;
+(void)getContentLocationFromFile:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)managedLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 promptingBehaviour:(NSUInteger)arg1 ;
-(id)localizedMDMDescription;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif