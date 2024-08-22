// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEISSUELINKPRESENTATIONSOURCE_H
#define NEISSUELINKPRESENTATIONSOURCE_H

@class LPLinkMetadata, LPImage, NSString, NSURL;
@protocol NELinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NEIssueLinkPresentationSource : NSObject <NELinkPresentationSource>



@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) LPImage *linkPresentationImage; // ivar: _linkPresentationImage
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithIssue:(id)arg0 ;
-(id)linkPresentationImageFromIssue:(id)arg0 ;
-(id)subtitleFromIssue:(id)arg0 ;
-(id)titleFromIssue:(id)arg0 ;
-(id)urlFromIssue:(id)arg0 ;


@end


#endif