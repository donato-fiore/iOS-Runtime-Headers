// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEEXTENSIONPROVIDER_H
#define DEEXTENSIONPROVIDER_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling>



@property (nonatomic) BOOL allowUserAttachmentSelection; // ivar: _allowUserAttachmentSelection
@property (nonatomic) BOOL canGenerateNewAttachment; // ivar: _canGenerateNewAttachment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEnhancedLoggingStateOn; // ivar: _isEnhancedLoggingStateOn
@property (copy, nonatomic) NSString *loggingConsent; // ivar: _loggingConsent
@property (readonly) Class superclass;


-(id)_getHostname;
-(id)attachmentList;
-(id)attachmentsForParameters:(id)arg0 ;
-(id)attachmentsForParameters:(id)arg0 withProgressHandler:(id)arg1 ;
-(id)filesInDir:(id)arg0 matchingPattern:(id)arg1 excludingPattern:(id)arg2 ;
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)isExtensionEnhancedLoggingStateOnWithHandler:(id)arg0 ;
-(void)setupWithParameters:(id)arg0 ;
-(void)teardownWithParameters:(id)arg0 ;


@end


#endif