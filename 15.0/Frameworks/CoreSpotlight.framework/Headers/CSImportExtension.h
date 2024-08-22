// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSIMPORTEXTENSION_H
#define CSIMPORTEXTENSION_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface CSImportExtension : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)updateAttributes:(id)arg0 forFileAtURL:(id)arg1 error:(*id)arg2 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)dealloc;


@end


#endif