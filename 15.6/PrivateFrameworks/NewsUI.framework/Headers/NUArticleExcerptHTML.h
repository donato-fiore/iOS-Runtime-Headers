// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUARTICLEEXCERPTHTML_H
#define NUARTICLEEXCERPTHTML_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface NUArticleExcerptHTML : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSUInteger lengthType; // ivar: _lengthType
@property (readonly, nonatomic) NSString *processedHTML; // ivar: _processedHTML


+(id)articleExcerptCSS;
+(id)articleExcerptHTML;
-(id)embedCSSIntoExcerptHTML:(id)arg0 scale:(CGFloat)arg1 ;
-(id)excerptHTMLToProcessedHTML:(id)arg0 headline:(id)arg1 scale:(CGFloat)arg2 ;
-(id)initWitHeadline:(id)arg0 excerptHTML:(id)arg1 scale:(CGFloat)arg2 ;
-(id)paragraphShortExcerptHTML:(id)arg0 headline:(id)arg1 ;
-(id)stripHTMLTagsFromExcerptHTML:(id)arg0 ;


@end


#endif