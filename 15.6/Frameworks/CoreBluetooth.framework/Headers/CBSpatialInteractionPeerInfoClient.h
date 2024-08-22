// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBSPATIALINTERACTIONPEERINFOCLIENT_H
#define CBSPATIALINTERACTIONPEERINFOCLIENT_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface CBSpatialInteractionPeerInfoClient : NSObject

@property (nonatomic) unsigned int peerID; // ivar: _peerID
@property (copy, nonatomic) NSData *tokenData; // ivar: _tokenData
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (nonatomic) unsigned int uwbTokenFlags; // ivar: _uwbTokenFlags




@end


#endif