// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREQUESTOPTIONS_H
#define WFREQUESTOPTIONS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFRequestOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *httpHeaderDictionary; // ivar: _httpHeaderDictionary


-(void)addHttpHeaderField:(id)arg0 withValue:(id)arg1 ;


@end


#endif