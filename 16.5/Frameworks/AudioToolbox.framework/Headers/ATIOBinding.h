// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATIOBINDING_H
#define ATIOBINDING_H

@class NSString, AVAudioSession;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATIOBinding : NSObject <NSSecureCoding>

 {
    ? mImpl;
}


@property (readonly, nonatomic) unsigned int deviceID;
@property (readonly, retain, nonatomic) NSString *deviceUID;
@property (readonly, retain, nonatomic) AVAudioSession *session;
@property (readonly, nonatomic) unsigned int sessionID;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAudioSession:(id)arg0 ;
-(id)initWithAudioSessionID:(unsigned int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceID:(unsigned int)arg0 ;
-(id)initWithDeviceUID:(id)arg0 ;
-(id)initWithImpl:(struct shared_ptr<const AT::IOBinding::Impl> )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif