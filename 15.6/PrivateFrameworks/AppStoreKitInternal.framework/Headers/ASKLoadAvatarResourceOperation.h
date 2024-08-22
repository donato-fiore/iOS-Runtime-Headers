// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASKLOADAVATARRESOURCEOPERATION_H
#define ASKLOADAVATARRESOURCEOPERATION_H

@class ASKLoadResourceOperation, NSString;



@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *playerId; // ivar: _playerId


+(id)supportedScheme;
-(id)initWithPlayerId:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 dataConsumer:(id)arg1 ;
-(id)makePlayerFetchError;
-(void)main;


@end


#endif