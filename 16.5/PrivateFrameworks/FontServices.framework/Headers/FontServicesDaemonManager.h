// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FONTSERVICESDAEMONMANAGER_H
#define FONTSERVICESDAEMONMANAGER_H

@class NSXPCConnection;
@protocol FontServicesClientProtocol;

#import <Foundation/Foundation.h>


@interface FontServicesDaemonManager : NSObject <FontServicesClientProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)sharedManager;
-(void)checkin:(id)arg0 ;
-(void)checkinForFontPicker:(id)arg0 ;
-(void)checkinForWebKitProcess:(id)arg0 reply:(id)arg1 ;
-(void)fontAddedInfo:(id)arg0 addedURLStrings:(id)arg1 removedURLStrings:(id)arg2 ;
-(void)fontChanged:(id)arg0 reply:(id)arg1 ;
-(void)requestFonts:(id)arg0 forClient:(id)arg1 ;
-(void)requestFonts:(id)arg0 reply:(id)arg1 ;
-(void)resetIssuedFontsFor:(id)arg0 ;
-(void)resumeAndShowAlertForSuspendedFontProviders;
-(void)scheduleFontFilesDeletion:(id)arg0 ;
-(void)synchronizeFontAssets:(id)arg0 reply:(id)arg1 ;
-(void)updatingUserFonts:(id)arg0 ;


@end


#endif