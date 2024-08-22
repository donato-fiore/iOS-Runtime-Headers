// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVESERVICE_H
#define LIVESERVICE_H

@class INObject, NSString, NSNumber;


#import "ContentImage.h"

@interface LiveService : INObject

@property (nonatomic, copy) NSString *appAdamId;
@property (nonatomic, retain) ContentImage *appImage;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appStoreUrl;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, copy) NSString *channelName;
@property (nonatomic, retain) NSNumber *isInstalled;
@property (nonatomic, retain) NSNumber *isSubscribed;
@property (nonatomic, copy) NSString *liveServiceId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *playPunchoutUrl;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif