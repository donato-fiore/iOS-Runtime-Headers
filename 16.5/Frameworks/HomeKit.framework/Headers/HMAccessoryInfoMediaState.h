// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYINFOMEDIASTATE_H
#define HMACCESSORYINFOMEDIASTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMAccessoryInfoMediaState : NSObject

@property (readonly, copy) NSString *mediaIdentifier; // ivar: _mediaIdentifier
@property (readonly) NSInteger playbackState; // ivar: _playbackState
@property (readonly) NSInteger repeatState; // ivar: _repeatState
@property (readonly) NSInteger shuffleState; // ivar: _shuffleState
@property (readonly) CGFloat volume; // ivar: _volume


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMediaIdentifier:(id)arg0 volume:(CGFloat)arg1 playbackState:(NSInteger)arg2 shuffleState:(NSInteger)arg3 repeatState:(NSInteger)arg4 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)protoData;
-(id)protoPayload;


@end


#endif