// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NECHANNELLINKPRESENTATIONSOURCE_H
#define NECHANNELLINKPRESENTATIONSOURCE_H

@class LPLinkMetadata, NSString, NSURL;
@protocol NELinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NEChannelLinkPresentationSource : NSObject <NELinkPresentationSource>



@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithChannel:(id)arg0 ;


@end


#endif