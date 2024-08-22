// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREABLECREDENTIALMESSAGE_H
#define PKSHAREABLECREDENTIALMESSAGE_H

@class PKProtobufShareableCredentialMessage, NSString, UIImage, NSArray, MSMessage;

#import <Foundation/Foundation.h>


@interface PKShareableCredentialMessage : NSObject {
    PKProtobufShareableCredentialMessage *_protoMessage;
}


@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) UIImage *passThumbnailImage;
@property (copy, nonatomic) NSString *policyIdentifier;
@property (copy, nonatomic) NSArray *shareableCredentials;
@property (readonly, nonatomic) MSMessage *underlyingMessage; // ivar: _underlyingMessage


-(id)_shareableCredentialMessageDataURLWithData:(id)arg0 ;
-(id)_shareableCredentialMessageDataWithDataURL:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithUnderlyingMessage:(id)arg0 ;
-(void)_updateDataURL;
-(void)_updateLayoutContents;


@end


#endif