// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALINVITATIONMESSAGE_H
#define PKSUBCREDENTIALINVITATIONMESSAGE_H

@class PKProtobufSubcredentialInvitationMessage, NSString, UIImage, PKAppletSubcredentialSharingInvitation, MSMessage;

#import <Foundation/Foundation.h>


@interface PKSubcredentialInvitationMessage : NSObject {
    PKProtobufSubcredentialInvitationMessage *_protoMessage;
}


@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) UIImage *passThumbnailImage;
@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *phoneInvitation;
@property (nonatomic) NSUInteger status;
@property (readonly, nonatomic) MSMessage *underlyingMessage; // ivar: _underlyingMessage
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *watchInvitation;


-(id)_subcredentialInvitationMessageDataURLWithData:(id)arg0 ;
-(id)_subcredentialInvitationMessageDataWithDataURL:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithUnderlyingMessage:(id)arg0 ;
-(void)_updateDataURL;
-(void)_updateLayoutContents;


@end


#endif