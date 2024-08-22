// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSTEMPLATEICONREQUEST_H
#define WBSTEMPLATEICONREQUEST_H

@class NSString, UIColor;


#import "WBSSiteMetadataRequest.h"
#import "WBSTemplateIconMonogramConfiguration.h"

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property (readonly, copy, nonatomic) NSString *monogramTitle;
@property (readonly, nonatomic) UIColor *overrideForegroundColor;
@property (readonly, nonatomic) BOOL saveToDisk;


-(id)initWithURL:(id)arg0 extraInfo:(id)arg1 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 monogramConfiguration:(id)arg2 overrideForegroundColor:(id)arg3 saveToDisk:(BOOL)arg4 ;


@end


#endif