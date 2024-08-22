// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFILEWEBRESOURCE_H
#define WFFILEWEBRESOURCE_H



#import "WFWebResource.h"
#import "WFFileRepresentation.h"

@interface WFFileWebResource : WFWebResource

@property (readonly, nonatomic) WFFileRepresentation *file; // ivar: _file


+(BOOL)supportsSecureCoding;
-(id)MIMEType;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(id)loadInWKWebView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif