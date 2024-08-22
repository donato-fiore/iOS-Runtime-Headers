// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALINVITATIONMESSAGE_H
#define PKSUBCREDENTIALINVITATIONMESSAGE_H

@class PKProtobufSubcredentialInvitationMessage, NSString, UIImage, PKAppletSubcredentialSharingInvitation;
@protocol PKSharingMessageExtensionMessage;

#import <Foundation/Foundation.h>


@interface PKSubcredentialInvitationMessage : NSObject <PKSharingMessageExtensionMessage>

 {
    PKProtobufSubcredentialInvitationMessage *_protoMessage;
}


@property (copy, nonatomic) NSString *dataString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isPending; // ivar: _isPending
@property (copy, nonatomic) UIImage *passThumbnailImage;
@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *phoneInvitation;
@property (nonatomic) NSUInteger status;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *watchInvitation;


-(id)_subcredentialInvitationMessageDataURLWithData:(id)arg0 ;
-(id)_subcredentialInvitationMessageDataWithDataURL:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)urlRepresentation;


@end


#endif