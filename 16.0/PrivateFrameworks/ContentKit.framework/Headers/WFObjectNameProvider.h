// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOBJECTNAMEPROVIDER_H
#define WFOBJECTNAMEPROVIDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface WFObjectNameProvider : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contents; // ivar: _contents


+(id)sharedProvider;
-(id)init;
-(id)nameForObject:(id)arg0 ;


@end


#endif