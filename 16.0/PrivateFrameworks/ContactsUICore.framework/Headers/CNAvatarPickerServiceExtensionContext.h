// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARPICKERSERVICEEXTENSIONCONTEXT_H
#define CNAVATARPICKERSERVICEEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol CNAvatarPickerServiceExtensionProtocol;



@interface CNAvatarPickerServiceExtensionContext : NSExtensionContext <CNAvatarPickerServiceExtensionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CNAvatarPickerServiceExtensionProtocol> *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteProxy;
-(void)overrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)setCurrentMemojiMetadata:(id)arg0 ;
-(void)setSelectedRecordIdentifier:(id)arg0 ;
-(void)setSetupUserAvatarRecords:(id)arg0 ;


@end


#endif