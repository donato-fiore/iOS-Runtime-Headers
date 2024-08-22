// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGURLDISSECTOR_H
#define SGURLDISSECTOR_H

@class NSString;
@protocol SGMailMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGURLDissector : SGPipelineDissector <SGMailMessageProcessing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_titleFromMessagesSynthesizedTextContent:(id)arg0 ;
-(id)supportedBundleIdentifiers;
-(id)urlsFromAttributes:(id)arg0 handle:(id)arg1 bundleIdentifier:(id)arg2 domainIdentifier:(id)arg3 uniqueIdentifier:(id)arg4 documentTitle:(id)arg5 documentDate:(id)arg6 documentTimeInterval:(CGFloat)arg7 receivedAt:(id)arg8 isOutgoingDocument:(BOOL)arg9 ;
-(id)urlsFromText:(id)arg0 handle:(id)arg1 dataDetectorMatches:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(CGFloat)arg8 receivedAt:(id)arg9 isOutgoingDocument:(BOOL)arg10 ;
-(id)urlsFromURLs:(id)arg0 handle:(id)arg1 bundleIdentifier:(id)arg2 domainIdentifier:(id)arg3 uniqueIdentifier:(id)arg4 documentTitle:(id)arg5 documentDate:(id)arg6 documentTimeInterval:(CGFloat)arg7 receivedAt:(id)arg8 isOutgoingDocument:(BOOL)arg9 ;
-(unsigned char)_flagsForBundleIdentifier:(id)arg0 documentDate:(id)arg1 documentTimeInterval:(CGFloat)arg2 isOutgoingDocument:(BOOL)arg3 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif