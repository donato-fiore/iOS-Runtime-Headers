// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUMOMENTSPROVIDER_H
#define TUMOMENTSPROVIDER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface TUMomentsProvider : NSObject

@property (readonly, copy, nonatomic) NSDictionary *remoteIDSDestinations; // ivar: _remoteIDSDestinations
@property (readonly, nonatomic, getter=isRemoteMomentsAvailable) BOOL remoteMomentsAvailable; // ivar: _remoteMomentsAvailable
@property (readonly, copy, nonatomic) NSString *requesterID; // ivar: _requesterID
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken


-(BOOL)isEqualToProvider:(id)arg0 ;
-(id)description;
-(id)initWithCall:(id)arg0 ;
-(id)initWithConversation:(id)arg0 ;


@end


#endif