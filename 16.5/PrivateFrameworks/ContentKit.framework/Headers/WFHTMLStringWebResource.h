// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHTMLSTRINGWEBRESOURCE_H
#define WFHTMLSTRINGWEBRESOURCE_H

@class NSURL, NSString;


#import "WFWebResource.h"

@interface WFHTMLStringWebResource : WFWebResource

@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSString *htmlString; // ivar: _htmlString


+(BOOL)supportsSecureCoding;
-(id)MIMEType;
-(id)URL;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHTMLString:(id)arg0 baseURL:(id)arg1 ;
-(id)loadInWKWebView:(id)arg0 ;
-(id)textEncodingName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif