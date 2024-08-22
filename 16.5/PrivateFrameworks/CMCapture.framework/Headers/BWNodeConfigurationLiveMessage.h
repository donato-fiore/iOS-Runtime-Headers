// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNODECONFIGURATIONLIVEMESSAGE_H
#define BWNODECONFIGURATIONLIVEMESSAGE_H



#import "BWNodeMessage.h"
#import "BWFormat.h"

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {
    NSInteger _configurationID;
    BWFormat *_updatedFormat;
}


@property (readonly) NSInteger configurationID;
@property (readonly) BWFormat *updatedFormat;


+(id)newMessageWithConfigurationID:(NSInteger)arg0 ;
+(id)newMessageWithConfigurationID:(NSInteger)arg0 updatedFormat:(id)arg1 ;
-(void)dealloc;


@end


#endif