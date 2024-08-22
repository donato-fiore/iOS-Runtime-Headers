// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGESNIPPETHINTZONEBUILDER_H
#define EMMESSAGESNIPPETHINTZONEBUILDER_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EMMessageSnippetHintZoneBuilder : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)authorHintsFromHintsBySnippetZone:(id)arg0 ;
+(id)log;
+(id)snippetHintZoneFromString:(id)arg0 ;


@end


#endif