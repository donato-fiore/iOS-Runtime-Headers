// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEARTICLELINKPRESENTATIONSOURCE_H
#define NEARTICLELINKPRESENTATIONSOURCE_H

@class NSURL, NSString, LPImage;
@protocol UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NEArticleLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>



@property (readonly, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPImage *linkPresentationImage; // ivar: _linkPresentationImage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(CGFloat)deviceScreenScaleFromPotentialBackgroundThread;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithHeadline:(id)arg0 ;
-(id)linkPresentationImageFromHeadline:(id)arg0 ;
-(id)titleFromHeadline:(id)arg0 ;
-(id)urlFromHeadline:(id)arg0 ;


@end


#endif