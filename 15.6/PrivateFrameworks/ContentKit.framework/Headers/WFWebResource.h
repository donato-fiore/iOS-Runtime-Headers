// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWEBRESOURCE_H
#define WFWEBRESOURCE_H

@class NSString, NSURL, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFWebResource : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *frameName; // ivar: _frameName
@property (readonly, nonatomic) NSString *textEncodingName; // ivar: _textEncodingName


+(BOOL)supportsSecureCoding;
+(id)webResourceWithData:(id)arg0 MIMEType:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
+(id)webResourceWithFile:(id)arg0 ;
+(id)webResourceWithHTMLString:(id)arg0 baseURL:(id)arg1 ;
+(id)webResourceWithURL:(id)arg0 ;
-(id)containedImageFile;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 URL:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 frameName:(id)arg4 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)loadInWKWebView:(id)arg0 ;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif