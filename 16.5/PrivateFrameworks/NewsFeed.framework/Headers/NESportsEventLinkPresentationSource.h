// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NESPORTSEVENTLINKPRESENTATIONSOURCE_H
#define NESPORTSEVENTLINKPRESENTATIONSOURCE_H

@class LPLinkMetadata, NSItemProvider, NSString, NSURL;
@protocol NELinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NESportsEventLinkPresentationSource : NSObject <NELinkPresentationSource>



@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) NSItemProvider *linkPresentationIconProvider; // ivar: _linkPresentationIconProvider
@property (readonly, nonatomic) NSItemProvider *linkPresentationImageProvider; // ivar: _linkPresentationImageProvider
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(id)iconItemProviderForSportsEvent:(id)arg0 tagImageProvider:(id)arg1 ;
+(id)imageItemProviderForSportsEvent:(id)arg0 tagImageProvider:(id)arg1 ;
+(id)titleFromSportsEvent:(id)arg0 ;
+(id)urlFromSportsEvent:(id)arg0 ;
-(id)initWithSportsEvent:(id)arg0 tagImageProvider:(id)arg1 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 sportsEvent:(id)arg2 tagImageProvider:(id)arg3 ;


@end


#endif