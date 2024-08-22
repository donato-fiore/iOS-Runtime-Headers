// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFULLSCREENCAPTION_H
#define SXFULLSCREENCAPTION_H

@class NSString;
@protocol SXTextSourceDataSource, SXFullscreenCaptionDataSource;

#import <Foundation/Foundation.h>

#import "SXFormattedText.h"

@interface SXFullscreenCaption : NSObject <SXTextSourceDataSource>

 {
    NSString *_text;
    SXFormattedText *_caption;
    id<SXFullscreenCaptionDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)additionsForTextSource:(id)arg0 ;
-(id)componentTextStyleForTextSource:(id)arg0 inheritingFromDefaultStyles:(BOOL)arg1 ;
-(id)contentSizeCategoryForTextSource:(id)arg0 ;
-(id)defaultComponentTextStyleForTextSource:(id)arg0 ;
-(id)defaultComponentTextStylesForTextSource:(id)arg0 ;
-(id)inlineTextStylesForTextSource:(id)arg0 ;
-(id)textResizerForTextSource:(id)arg0 ;
-(id)textRulesForTextSource:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 ;


@end


#endif