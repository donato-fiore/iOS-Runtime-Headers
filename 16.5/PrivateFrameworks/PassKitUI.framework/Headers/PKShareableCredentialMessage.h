// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAREABLECREDENTIALMESSAGE_H
#define PKSHAREABLECREDENTIALMESSAGE_H

@class PKProtobufShareableCredentialMessage, NSString, UIImage, NSArray;
@protocol PKSharingMessageExtensionMessage;

#import <Foundation/Foundation.h>


@interface PKShareableCredentialMessage : NSObject <PKSharingMessageExtensionMessage>

 {
    PKProtobufShareableCredentialMessage *_protoMessage;
}


@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *dataString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isPassInLibrary;
@property (nonatomic) BOOL isPending; // ivar: _isPending
@property (readonly, nonatomic) BOOL isShareAcceptable;
@property (copy, nonatomic) UIImage *passThumbnailImage;
@property (copy, nonatomic) NSString *policyIdentifier;
@property (copy, nonatomic) NSArray *shareableCredentials;
@property (readonly) Class superclass;


-(id)_shareableCredentialMessageDataURLWithData:(id)arg0 ;
-(id)_shareableCredentialMessageDataWithDataURL:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)urlRepresentation;


@end


#endif