// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANANNOUNCEMENTCONTENT_H
#define ANANNOUNCEMENTCONTENT_H

@class NSString, NSUUID, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANAnnouncementContent : NSObject <NSSecureCoding>

 {
    NSString *_endpointIdentifier;
    NSUUID *_homeKitUserIdentifier;
}


@property (retain, nonatomic) NSURL *audioFileURL; // ivar: _audioFileURL
@property (retain, nonatomic) NSString *transcription; // ivar: _transcription


+(BOOL)supportsSecureCoding;
+(id)contentWithAudioFileURL:(id)arg0 ;
-(id)description;
-(id)endpointIdentifier;
-(id)homeKitUserIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEndpointIdentifier:(id)arg0 ;
-(void)setHomeKitUserIdentifier:(id)arg0 ;


@end


#endif