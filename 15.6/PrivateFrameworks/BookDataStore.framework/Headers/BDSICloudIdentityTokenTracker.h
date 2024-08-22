// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BDSICLOUDIDENTITYTOKENTRACKER_H
#define BDSICLOUDIDENTITYTOKENTRACKER_H

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BDSICloudIdentityToken.h"

@interface BDSICloudIdentityTokenTracker : NSObject

@property (retain, nonatomic) BDSICloudIdentityToken *currentToken; // ivar: _currentToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSMutableDictionary *plistContents; // ivar: _plistContents
@property (retain, nonatomic) NSURL *plistURL; // ivar: _plistURL
@property (nonatomic) BOOL trackLiverpool; // ivar: _trackLiverpool


-(BOOL)didUnacknowledgediCloudLogoutOccur;
-(id)initWithContainerURL:(id)arg0 trackingLiverpool:(BOOL)arg1 ;
-(void)acknowledgeiCloudIdentity;
-(void)fetchCurrentToken;
-(void)forceUpdateTokenWithString:(id)arg0 ;


@end


#endif