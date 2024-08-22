// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APCPLAYEREMBEDINFO_H
#define APCPLAYEREMBEDINFO_H


#import <Foundation/Foundation.h>


@interface APCPlayerEmbedInfo : NSObject

@property (readonly, nonatomic) NSUInteger estPasscodeDuration; // ivar: _estPasscodeDuration
@property (nonatomic) NSUInteger measPasscodeDuration; // ivar: _measPasscodeDuration


-(BOOL)isValid;
-(id)initWithPasscodeDurationNSec:(NSUInteger)arg0 ;


@end


#endif