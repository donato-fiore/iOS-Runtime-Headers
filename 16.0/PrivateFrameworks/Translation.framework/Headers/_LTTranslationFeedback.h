// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTTRANSLATIONFEEDBACK_H
#define _LTTRANSLATIONFEEDBACK_H

@class NSString, NSURL;
@protocol _LTLoggingRequest;

#import <Foundation/Foundation.h>

#import "_LTLocalePair.h"

@interface _LTTranslationFeedback : NSObject <_LTLoggingRequest>



@property (copy, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *errorsAsJSON; // ivar: _errorsAsJSON
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) _LTLocalePair *localePair; // ivar: _localePair
@property (copy, nonatomic) NSString *safariVersion; // ivar: _safariVersion
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (copy, nonatomic) NSString *sourceContentAsJSON; // ivar: _sourceContentAsJSON
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetContentAsJSON; // ivar: _targetContentAsJSON
@property (copy, nonatomic) NSURL *webpageURL; // ivar: _webpageURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif