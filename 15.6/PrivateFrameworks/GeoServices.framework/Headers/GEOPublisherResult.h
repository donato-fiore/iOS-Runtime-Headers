// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPUBLISHERRESULT_H
#define GEOPUBLISHERRESULT_H


#import <Foundation/Foundation.h>

#import "GEOPDPublisherResult.h"
#import "GEOPDComponent.h"
#import "GEOPublisher.h"

@interface GEOPublisherResult : NSObject {
    GEOPDPublisherResult *_publisherResult;
    GEOPDComponent *_publisherComponent;
    GEOPublisher *_publisher;
}


@property (readonly, nonatomic) GEOPublisher *publisher;


+(id)publisherResultsFromResponse:(id)arg0 ;
-(id)initWithPublisherResult:(id)arg0 ;


@end


#endif