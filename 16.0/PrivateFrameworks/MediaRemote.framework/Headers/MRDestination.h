// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRDESTINATION_H
#define MRDESTINATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRClient.h"
#import "MRAVEndpoint.h"
#import "MROrigin.h"
#import "MRPlayer.h"
#import "MRPlayerPath.h"

@interface MRDestination : NSObject <NSCopying>



@property (copy, nonatomic) MRClient *client;
@property (retain, nonatomic) MRAVEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isProactive;
@property (readonly, nonatomic) BOOL isUserSelected;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) NSString *outputContextUID; // ivar: _outputContextUID
@property (retain, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID
@property (copy, nonatomic) MRPlayer *player;
@property (copy, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath


+(id)localDestination;
+(id)proactiveDestination;
+(id)userSelectedDestination;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)initWithOutputContextUID:(id)arg0 ;
-(id)initWithOutputDeviceUID:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 ;
-(void)populatePlayerPathIfNeeded;


@end


#endif