// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPUBLISHER_H
#define GEOPUBLISHER_H

@class NSString, NSURL;
@protocol GEOCollectionPublisherAttribution;

#import <Foundation/Foundation.h>

#import "GEOPDPublisher.h"
#import "GEOMapItemIdentifier.h"

@interface GEOPublisher : NSObject {
    GEOPDPublisher *_publisher;
    NSString *_publisherAttributionIdentifierString;
}


@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSObject<GEOCollectionPublisherAttribution> *publisherAttribution; // ivar: _publisherAttribution
@property (readonly, nonatomic) NSString *publisherDescription;
@property (readonly, nonatomic) NSURL *publisherURL;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) NSInteger totalCollectionCount;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPublisher:(id)arg0 usingAttribution:(id)arg1 ;


@end


#endif