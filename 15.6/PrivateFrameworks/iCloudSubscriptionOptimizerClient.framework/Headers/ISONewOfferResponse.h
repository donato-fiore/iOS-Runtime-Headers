// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISONEWOFFERRESPONSE_H
#define ISONEWOFFERRESPONSE_H

@class NSError;

#import <Foundation/Foundation.h>


@interface ISONewOfferResponse : NSObject

@property NSUInteger action; // ivar: action
@property (retain) NSError *error; // ivar: error
@property NSInteger maxDelayTimestampMillis; // ivar: maxDelayTimestampMillis


-(id)init;


@end


#endif