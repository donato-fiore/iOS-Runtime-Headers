// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEISSUELINKPRESENTATIONSOURCE_H
#define NEISSUELINKPRESENTATIONSOURCE_H

@class NSString, LPImage, NSURL;
@protocol UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NEIssueLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPImage *linkPresentationImage; // ivar: _linkPresentationImage
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithIssue:(id)arg0 ;
-(id)linkPresentationImageFromIssue:(id)arg0 ;
-(id)subtitleFromIssue:(id)arg0 ;
-(id)titleFromIssue:(id)arg0 ;
-(id)urlFromIssue:(id)arg0 ;


@end


#endif