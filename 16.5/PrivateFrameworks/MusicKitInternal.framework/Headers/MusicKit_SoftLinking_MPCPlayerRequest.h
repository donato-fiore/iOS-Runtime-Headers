// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPCPLAYERREQUEST_H
#define MUSICKIT_SOFTLINKING_MPCPLAYERREQUEST_H

@class MPCPlayerRequest;
@protocol MusicKit_SoftLinking_MPCPlayerPath;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPCPlayerRequest : NSObject {
    MPCPlayerRequest *_underlyingPlayerRequest;
}


@property (readonly, nonatomic) MPCPlayerRequest *_underlyingPlayerRequest;
@property (nonatomic) NSInteger forwardCount;
@property (nonatomic) NSInteger historyCount;
@property (retain, nonatomic) NSObject<MusicKit_SoftLinking_MPCPlayerPath> *playerPath;


-(id)initWithPath:(id)arg0 ;
-(id)initWithUnderlyingPlayerRequest:(id)arg0 ;
-(void)performWithCompletion:(id)arg0 ;


@end


#endif