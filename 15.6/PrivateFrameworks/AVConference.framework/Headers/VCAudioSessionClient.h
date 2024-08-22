// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOSESSIONCLIENT_H
#define VCAUDIOSESSIONCLIENT_H

@protocol NSCopying, VCAudioSessionDelegate;

#import <Foundation/Foundation.h>

#import "VCAudioSessionMediaProperties.h"

@interface VCAudioSessionClient : NSObject <NSCopying>

 {
    id<VCAudioSessionDelegate> *_notificationClient;
}


@property (nonatomic) unsigned char clientType; // ivar: _clientType
@property (retain, nonatomic) VCAudioSessionMediaProperties *mediaProperties; // ivar: _mediaProperties
@property (nonatomic) NSObject<VCAudioSessionDelegate> *notificationClient;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif