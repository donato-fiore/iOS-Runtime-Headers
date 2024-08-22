// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCAUDIOUPSELLCONFIG_H
#define FCAUDIOUPSELLCONFIG_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface FCAudioUpsellConfig : NSObject

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger playPosition; // ivar: _playPosition


-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif