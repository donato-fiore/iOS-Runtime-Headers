// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFARTICLE_H
#define WFARTICLE_H

@class NSURL, NSString, NSDate;
@protocol NSSecureCoding, WFNaming, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFArticle : NSObject <NSSecureCoding, WFNaming, WFSerializableContent>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSString *author; // ivar: _author
@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *excerpt; // ivar: _excerpt
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *mainImageURL; // ivar: _mainImageURL
@property (readonly, nonatomic) NSUInteger numberOfWords; // ivar: _numberOfWords
@property (readonly, copy, nonatomic) NSDate *publishedDate; // ivar: _publishedDate
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(NSUInteger)numberOfWordsInString:(id)arg0 ;
+(id)articleWithTitle:(id)arg0 author:(id)arg1 publishedDate:(id)arg2 body:(id)arg3 excerpt:(id)arg4 numberOfWords:(NSUInteger)arg5 mainImageURL:(id)arg6 URL:(id)arg7 ;
+(id)mainImageURLFromHTML:(id)arg0 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)summaryOfParagraph:(id)arg0 ;
+(void)fetchArticleFromURL:(id)arg0 pageHTML:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 author:(id)arg1 publishedDate:(id)arg2 body:(id)arg3 excerpt:(id)arg4 numberOfWords:(NSUInteger)arg5 mainImageURL:(id)arg6 URL:(id)arg7 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif