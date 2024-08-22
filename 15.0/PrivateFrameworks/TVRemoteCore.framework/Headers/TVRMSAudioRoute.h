// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSAUDIOROUTE_H
#define TVRMSAUDIOROUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVRMSAudioRoute : NSObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSUInteger macAddress; // ivar: _macAddress
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL supportsVideo; // ivar: _supportsVideo


+(id)audioRoutesFromProtobufs:(id)arg0 ;
+(id)protobufsFromAudioRoutes:(id)arg0 ;
-(BOOL)isEqualToAudioRoute:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)protobuf;


@end


#endif