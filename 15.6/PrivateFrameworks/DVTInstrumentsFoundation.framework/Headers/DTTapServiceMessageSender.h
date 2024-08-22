// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTTAPSERVICEMESSAGESENDER_H
#define DTTAPSERVICEMESSAGESENDER_H

@class DTXChannel;

#import <Foundation/Foundation.h>


@interface DTTapServiceMessageSender : NSObject

@property (readonly, retain, nonatomic) DTXChannel *channel; // ivar: _channel


-(id)initWithChannel:(id)arg0 ;
-(void)sendBarrierMessage;
-(void)sendMessage:(id)arg0 ;


@end


#endif