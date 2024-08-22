// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNHYPERLINKCONTROLLER_H
#define KNHYPERLINKCONTROLLER_H


#import <Foundation/Foundation.h>


@interface KNHyperlinkController : NSObject



+(BOOL)URLContainsKeynoteSpecificHyperlink:(id)arg0 ;
+(BOOL)canProcessHyperlinkURLInRemote:(id)arg0 ;
+(BOOL)isExternalHyperlinkURL:(id)arg0 ;
+(NSInteger)hyperlinkTypeFromHyperlinkURL:(id)arg0 ;
+(NSUInteger)slideIndexForSlideLink:(id)arg0 url:(id)arg1 ;
+(id)displayStringForSlideLink:(NSInteger)arg0 url:(id)arg1 documentRoot:(id)arg2 ;
+(id)smartFieldForRep:(id)arg0 atUnscaledPoint:(struct CGPoint )arg1 outRep:(*id)arg2 ;
+(id)uniqueIdentifierFromHyperlinkURL:(id)arg0 ;


@end


#endif