// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIACTIONPUNCHOUT_H
#define VUIACTIONPUNCHOUT_H

@class NSString, WLKChannelDetails, NSURL;


#import "VUIAction.h"
#import "VUIAppContext.h"

@interface VUIActionPunchout : VUIAction

@property (retain, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (retain, nonatomic) WLKChannelDetails *channelDetails; // ivar: _channelDetails
@property (copy, nonatomic) NSString *contentTitle; // ivar: _contentTitle
@property (retain, nonatomic) NSString *externalID; // ivar: _externalID
@property (nonatomic) BOOL isAdultContent; // ivar: _isAdultContent
@property (nonatomic) BOOL isEntitledToPlay; // ivar: _isEntitledToPlay
@property (nonatomic) BOOL isPlaybackURL; // ivar: _isPlaybackURL
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSURL *punchoutURL; // ivar: _punchoutURL
@property (retain, nonatomic) NSString *referenceID; // ivar: _referenceID
@property (nonatomic) BOOL shouldAvoidInstallSheet; // ivar: _shouldAvoidInstallSheet


-(BOOL)_isValidAppInstalled;
-(BOOL)canPerformNow;
-(BOOL)isAccountRequired;
-(id)initWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)_openAirplayPicker:(id)arg0 ;
-(void)_openPunchoutURL:(id)arg0 ;
-(void)_showErrorMessageAlert:(id)arg0 ;
-(void)_startAppInstallFlow:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif