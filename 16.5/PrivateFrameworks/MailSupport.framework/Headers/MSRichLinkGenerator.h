// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSRICHLINKGENERATOR_H
#define MSRICHLINKGENERATOR_H

@class NSString;
@protocol MSRichLinkGeneration;

#import <Foundation/Foundation.h>


@interface MSRichLinkGenerator : NSObject <MSRichLinkGeneration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldUseRichLinks;
+(id)linkGenerator;
+(id)titleConvertToPlainLink;
+(id)titleConvertToRichLink;
+(id)titleOpenLink;
-(void)createRichLinkWithURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif