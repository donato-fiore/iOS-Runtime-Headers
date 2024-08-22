// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPINSTALLCOORDINATOR_H
#define VUIAPPINSTALLCOORDINATOR_H

@class WLKChannelDetails, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "VUIAccessViewController.h"
#import "VUIAppInstallerViewController.h"

@interface VUIAppInstallCoordinator : NSObject

@property (retain, nonatomic) VUIAccessViewController *accessViewController; // ivar: _accessViewController
@property (retain, nonatomic) WLKChannelDetails *channelDetails; // ivar: _channelDetails
@property (retain, nonatomic) NSString *contentTitle; // ivar: _contentTitle
@property (retain, nonatomic) VUIAppInstallerViewController *installerViewController; // ivar: _installerViewController
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithChannelDetails:(id)arg0 contentTitle:(id)arg1 ;
-(void)_installAppWithChannel:(id)arg0 punchoutURL:(id)arg1 completion:(id)arg2 ;
-(void)installAppWithPunchoutURL:(id)arg0 completion:(id)arg1 ;


@end


#endif