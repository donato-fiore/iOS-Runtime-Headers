// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDEFAULTFONTDESCRIBING_H
#define SXDEFAULTFONTDESCRIBING_H

@class NSString;
@protocol SXTextStyleFontDescribing, SXTextStyleFontAttributes;

#import <Foundation/Foundation.h>


@interface SXDefaultFontDescribing : NSObject <SXTextStyleFontDescribing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXTextStyleFontAttributes> *fontAttributes; // ivar: _fontAttributes
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif