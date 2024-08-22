// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCONTENTPLAYRESPONSE_H
#define WLKCONTENTPLAYRESPONSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "WLKPlayable.h"

@interface WLKContentPlayResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) WLKPlayable *playable; // ivar: _playable


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif