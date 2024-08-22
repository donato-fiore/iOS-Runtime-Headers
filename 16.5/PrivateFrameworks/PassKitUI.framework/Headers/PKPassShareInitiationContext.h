// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREINITIATIONCONTEXT_H
#define PKPASSSHAREINITIATIONCONTEXT_H

@class NSArray, PKPassShareActivationOptions, NSString, PKPassShare, PKContact, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface PKPassShareInitiationContext : NSObject

@property (nonatomic, getter=areActivationOptionsUserEditable) BOOL activationOptionsUserEditable; // ivar: _activationOptionsUserEditable
@property (retain, nonatomic) NSArray *allowedChannels; // ivar: _allowedChannels
@property (nonatomic) NSUInteger authenticationType; // ivar: _authenticationType
@property (retain, nonatomic) PKPassShareActivationOptions *availableActivationOptions; // ivar: _availableActivationOptions
@property (retain, nonatomic) NSArray *blockedChannels; // ivar: _blockedChannels
@property (retain, nonatomic) NSString *channelBundleIdentifier; // ivar: _channelBundleIdentifier
@property (retain, nonatomic) PKPassShare *composedShare; // ivar: _composedShare
@property (nonatomic) BOOL didCreateShare; // ivar: _didCreateShare
@property (nonatomic) NSUInteger environment; // ivar: _environment
@property (nonatomic) NSUInteger flow; // ivar: _flow
@property (nonatomic) BOOL hasModifiedEntitlements; // ivar: _hasModifiedEntitlements
@property (readonly, nonatomic) PKContact *recipient; // ivar: _recipient
@property (readonly, nonatomic) BOOL requiresContactSelection;
@property (retain, nonatomic) UIImage *sharePreviewFallbackImage; // ivar: _sharePreviewFallbackImage
@property (retain, nonatomic) NSURL *sharePreviewImageURL; // ivar: _sharePreviewImageURL
@property (retain, nonatomic) NSString *sharePreviewSubtitle; // ivar: _sharePreviewSubtitle
@property (retain, nonatomic) NSString *sharePreviewTitle; // ivar: _sharePreviewTitle


-(BOOL)isShareConfiguredEnoughToBeSentOverChannelWithDisplayableError:(*id)arg0 pass:(id)arg1 ;
-(id)init;
-(id)initWithFlow:(NSUInteger)arg0 share:(id)arg1 ;


@end


#endif