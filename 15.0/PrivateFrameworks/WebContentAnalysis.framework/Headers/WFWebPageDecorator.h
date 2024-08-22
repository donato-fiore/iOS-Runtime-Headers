// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWEBPAGEDECORATOR_H
#define WFWEBPAGEDECORATOR_H

@class NSString;
@protocol WFWebPageProtocol;

#import <Foundation/Foundation.h>

#import "WFImgArrayCache.h"

@interface WFWebPageDecorator : NSObject <WFWebPageProtocol>

 {
    NSObject<WFWebPageProtocol> *webPageStripper;
    WFImgArrayCache *pageImagesPropertyCache;
}


@property (retain) NSString *URLString; // ivar: URLString


+(id)_plainTextWithSelector:(SEL)arg0 object:(id)arg1 ;
+(id)plainTextWithWebPageData:(id)arg0 ;
+(id)plainTextWithWebPageString:(id)arg0 ;
+(id)webPageWithData:(id)arg0 ;
+(id)webPageWithData:(id)arg0 URLString:(id)arg1 ;
+(id)webPageWithString:(id)arg0 ;
+(id)webPageWithString:(id)arg0 URLString:(id)arg1 ;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(NSInteger)numberOfImages;
-(NSInteger)numberOfKnownImagePixels;
-(NSInteger)numberOfUnknownSizedImages;
-(NSInteger)wordCount;
-(id)imageAltsText;
-(id)images;
-(id)initWithWebPageData:(id)arg0 ;
-(id)initWithWebPageString:(id)arg0 ;
-(id)initWithWebPageStripper:(id)arg0 ;
-(id)linkTitlesText;
-(id)links;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)pageContent;
-(id)pageTitle;
-(id)plainText;
-(id)plainTextAttributeWithSelector:(SEL)arg0 title:(id)arg1 ;
-(id)plainTextAttributeWithSelector:(SEL)arg0 title:(id)arg1 weight:(int)arg2 ;
-(id)rawPlainText;
-(id)scriptBlocks;
-(id)tags;
-(void)_cacheImgProperties;
-(void)dealloc;


@end


#endif