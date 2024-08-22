// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT24VOICEASSISTANTSYNCRESULT_H
#define _TTC8FMCLIENT24VOICEASSISTANTSYNCRESULT_H

@class NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient24VoiceAssistantSyncResult : NSObject <NSSecureCoding>

 {
    ? devices;
    ? anchor;
}


@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *devices;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevices:(id)arg0 anchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif