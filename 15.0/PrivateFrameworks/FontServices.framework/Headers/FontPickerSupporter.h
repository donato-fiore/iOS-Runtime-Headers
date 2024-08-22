// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FONTPICKERSUPPORTER_H
#define FONTPICKERSUPPORTER_H

@class NSMutableSet, NSXPCListenerEndpoint, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface FontPickerSupporter : NSObject

@property (retain, nonatomic) NSMutableSet *activatedFontFilePaths; // ivar: _activatedFontFilePaths
@property (retain, nonatomic) NSXPCListenerEndpoint *clientEndpoint; // ivar: _clientEndpoint
@property (nonatomic) BOOL clientHasFontAccessEntitlement; // ivar: _clientHasFontAccessEntitlement
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)clientHasFontAccessEntitlement:(struct ? )arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)checkin:(id)arg0 ;
-(void)done;
-(void)setup;
-(void)synchronize:(id)arg0 deactivated:(id)arg1 includingFontAssets:(BOOL)arg2 ;


@end


#endif