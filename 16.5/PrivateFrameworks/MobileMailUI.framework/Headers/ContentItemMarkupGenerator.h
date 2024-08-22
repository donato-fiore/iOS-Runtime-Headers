// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTENTITEMMARKUPGENERATOR_H
#define CONTENTITEMMARKUPGENERATOR_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface ContentItemMarkupGenerator : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isDisplayableImageContentItem:(id)arg0 ;
+(BOOL)isDisplayableInlineContentItem:(id)arg0 ;
+(BOOL)isPDFContentItem:(id)arg0 ;
+(id)attachmentElementMarkupStringForContentItem:(id)arg0 ;
+(id)log;
+(id)markupStringForDisplayForContentItem:(id)arg0 ;


@end


#endif