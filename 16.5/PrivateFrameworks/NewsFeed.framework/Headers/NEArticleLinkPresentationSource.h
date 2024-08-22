// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEARTICLELINKPRESENTATIONSOURCE_H
#define NEARTICLELINKPRESENTATIONSOURCE_H

@class NSURL, LPLinkMetadata, LPImage, NSString;
@protocol NELinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NEArticleLinkPresentationSource : NSObject <NELinkPresentationSource>



@property (readonly, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) LPImage *linkPresentationImage; // ivar: _linkPresentationImage
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(CGFloat)deviceScreenScaleFromPotentialBackgroundThread;
-(id)initWithHeadline:(id)arg0 ;
-(id)linkPresentationImageFromHeadline:(id)arg0 ;
-(id)titleFromHeadline:(id)arg0 ;
-(id)urlFromHeadline:(id)arg0 ;


@end


#endif