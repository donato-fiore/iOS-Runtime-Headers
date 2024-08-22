// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTDESTINATION_H
#define WFCONTENTDESTINATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFContentDestination : NSObject <NSSecureCoding, NSCopying, WFSerializableContent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSUInteger promptingBehaviour; // ivar: _promptingBehaviour
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)airdropDestination;
+(id)allContentDestinationClasses;
+(id)appDescriptorForFileProviderHandlingURL:(id)arg0 error:(*id)arg1 ;
+(id)appleScriptDestination;
+(id)clipboardDestination;
+(id)contentDestinationForFile:(id)arg0 ;
+(id)destinationWithCalendarSource:(id)arg0 ;
+(id)destinationWithNotesAccountIdentifier:(id)arg0 ;
+(id)genericDestination;
+(id)javaScriptForAutomationDestination;
+(id)locationDestination;
+(id)microphoneDestination;
+(id)networkDestination;
+(id)notificationDestination;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)onScreenContentDestination;
+(id)printDestination;
+(id)screenshotDestination;
+(id)shareExtensionDestination;
+(id)shellDestination;
+(id)shortcutsAppDestination;
+(id)speechRecognitionDestination;
+(id)wallpaperDestination;
+(id)webpagesDestination;
+(id)windowsDestination;
+(void)getContentDestinationFromFile:(id)arg0 completionHandler:(id)arg1 ;
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