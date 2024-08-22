// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGDISCOVERYFEEDITEM_H
#define PGDISCOVERYFEEDITEM_H

@class NSString;
@protocol PGDiscoveryFeedItem;

#import <Foundation/Foundation.h>


@interface PGDiscoveryFeedItem : NSObject <PGDiscoveryFeedItem>

 {
    NSString *_localIdentifier;
    BOOL _isCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dictionaryRepresentation;
-(id)initWithObject:(id)arg0 ;


@end


#endif