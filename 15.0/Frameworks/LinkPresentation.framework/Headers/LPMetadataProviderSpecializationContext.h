// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPMETADATAPROVIDERSPECIALIZATIONCONTEXT_H
#define LPMETADATAPROVIDERSPECIALIZATIONCONTEXT_H

@class NSString, NSURL, WKWebView;

#import <Foundation/Foundation.h>

#import "LPEvent.h"

@interface LPMetadataProviderSpecializationContext : NSObject

@property (readonly, copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSUInteger allowedSpecializations; // ivar: _allowedSpecializations
@property (retain, nonatomic) LPEvent *event; // ivar: _event
@property (copy, nonatomic) id *eventGenerator; // ivar: _eventGenerator
@property (readonly, nonatomic) BOOL hasLoadedResource; // ivar: _hasLoadedResource
@property (readonly, nonatomic) BOOL shouldFetchSubresources; // ivar: _shouldFetchSubresources
@property (readonly, retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithURL:(id)arg0 MIMEType:(id)arg1 webView:(id)arg2 hasLoadedResource:(BOOL)arg3 shouldFetchSubresources:(BOOL)arg4 allowedSpecializations:(NSUInteger)arg5 ;
-(void)ensureEventWithSpecialization:(NSUInteger)arg0 ;


@end


#endif