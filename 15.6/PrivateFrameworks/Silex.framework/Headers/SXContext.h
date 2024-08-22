// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONTEXT_H
#define SXCONTEXT_H

@class NSString;
@protocol SXHost, SXResourceDataSource, SXTextContentProvider;

#import <Foundation/Foundation.h>

#import "SXDocumentController.h"

@interface SXContext : NSObject

@property (readonly, nonatomic) SXDocumentController *documentController; // ivar: _documentController
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, weak, nonatomic) NSObject<SXResourceDataSource> *resourceDataSource; // ivar: _resourceDataSource
@property (readonly, nonatomic) NSObject<SXTextContentProvider> *textContentProvider; // ivar: _textContentProvider


+(void)prewarm;
-(id)initWithIdentifier:(id)arg0 shareURL:(id)arg1 JSONData:(id)arg2 resourceDataSource:(id)arg3 host:(id)arg4 error:(*id)arg5 ;


@end


#endif