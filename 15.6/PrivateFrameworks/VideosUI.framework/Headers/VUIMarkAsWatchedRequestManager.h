// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMARKASWATCHEDREQUESTMANAGER_H
#define VUIMARKASWATCHEDREQUESTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUIMarkAsWatchedRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingItemIDOperationDictionary; // ivar: _ongoingItemIDOperationDictionary


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)sendRequestForItemID:(id)arg0 itemType:(id)arg1 channelID:(id)arg2 adamID:(id)arg3 ;


@end


#endif