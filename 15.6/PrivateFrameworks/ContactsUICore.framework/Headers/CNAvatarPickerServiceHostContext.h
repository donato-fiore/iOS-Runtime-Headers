// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATARPICKERSERVICEHOSTCONTEXT_H
#define CNAVATARPICKERSERVICEHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol CNAvatarPickerServiceHostProtocol;



@interface CNAvatarPickerServiceHostContext : NSExtensionContext <CNAvatarPickerServiceHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CNAvatarPickerServiceHostProtocol> *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteProxy;
-(void)avatarPickerExtensionDidCancel;
-(void)avatarPickerExtensionDidCreateAvatarWithRecordData:(id)arg0 identifier:(id)arg1 ;
-(void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(id)arg0 ;
-(void)avatarPickerExtensionDidFinishWithImageData:(id)arg0 memojiMetadata:(id)arg1 ;
-(void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(id)arg0 ;
-(void)avatarPickerExtensionDidSelectItemWithImageData:(id)arg0 memojiMetadata:(id)arg1 ;


@end


#endif