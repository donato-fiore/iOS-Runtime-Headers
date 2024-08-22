// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NECHANNELLINKPRESENTATIONSOURCE_H
#define NECHANNELLINKPRESENTATIONSOURCE_H

@class NSString, NSURL;
@protocol UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NEChannelLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;


@end


#endif