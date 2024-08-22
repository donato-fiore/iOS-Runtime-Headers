// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXRDEVICEREMOTEACTIONSECTIONCONTAINER_H
#define AXRDEVICEREMOTEACTIONSECTIONCONTAINER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AXRDeviceRemoteActionSectionContainer : NSObject

@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSInteger preferredContextType; // ivar: _preferredContextType
@property (readonly, nonatomic) NSArray *remoteActions; // ivar: _remoteActions


-(id)initWithLocalizedTitle:(id)arg0 preferredContextType:(NSInteger)arg1 remoteActions:(id)arg2 ;


@end


#endif