// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMEDIAVIDEO_H
#define AMSMEDIAVIDEO_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSMediaVideo : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *videoDictionary; // ivar: _videoDictionary


-(id)initWithDictionary:(id)arg0 ;
-(id)name;


@end


#endif