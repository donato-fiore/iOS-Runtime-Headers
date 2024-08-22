// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKADAMIDTOCANONICALIDRESPONSE_H
#define WLKADAMIDTOCANONICALIDRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKAdamIDToCanonicalIDResponse : NSObject

@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, copy, nonatomic) NSString *showID; // ivar: _showID
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *url; // ivar: _url


-(id)initWithDictionary:(id)arg0 ;


@end


#endif