// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKREMOTEPASSACTIONENTERVALUEMESSAGE_H
#define NPKREMOTEPASSACTIONENTERVALUEMESSAGE_H

@class NSString, UIImage, MSMessage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NPKProtoRemotePassActionEnvelope.h"

@interface NPKRemotePassActionEnterValueMessage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *passLocalizedDescription;
@property (readonly, nonatomic) NSString *passOrganizationName;
@property (retain, nonatomic) NPKProtoRemotePassActionEnvelope *protoEnvelope; // ivar: _protoEnvelope
@property (readonly, nonatomic, getter=isResponse) BOOL response;
@property (readonly, nonatomic) BOOL supportsTopUp;
@property (retain, nonatomic) MSMessage *underlyingMessage; // ivar: _underlyingMessage


+(BOOL)supportsSecureCoding;
-(id)_imageForMessage:(id)arg0 ;
-(id)_messageDataURLWithData:(id)arg0 ;
-(id)_messageDataWithDataURL:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessage:(id)arg0 protoEnvelope:(id)arg1 image:(id)arg2 ;
-(id)initWithProtoEnvelope:(id)arg0 image:(id)arg1 ;
-(id)initWithUnderlyingMessage:(id)arg0 ;
-(void)_updateDataURL;
-(void)_updateLayoutContentsWithImage:(id)arg0 ;
-(void)_updateSummaryText;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif