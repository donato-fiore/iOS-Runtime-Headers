// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETAGLINKPRESENTATIONSOURCE_H
#define NETAGLINKPRESENTATIONSOURCE_H

@class NSString, LPImage, NSURL;
@protocol UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NETagLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPImage *linkPresentationImage; // ivar: _linkPresentationImage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithTag:(id)arg0 image:(id)arg1 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 image:(id)arg2 ;
-(id)linkPresentationImageFromImage:(id)arg0 ;


@end


#endif