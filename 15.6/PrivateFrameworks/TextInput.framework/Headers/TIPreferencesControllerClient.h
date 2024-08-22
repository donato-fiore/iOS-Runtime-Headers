// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIPREFERENCESCONTROLLERCLIENT_H
#define TIPREFERENCESCONTROLLERCLIENT_H

@class NSXPCConnection, NSString;


#import "TIPreferencesController.h"

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection *_connection;
    BOOL _writeable;
}


@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (retain, nonatomic) NSString *machName; // ivar: _machName


+(id)serviceInterface;
+(id)sharedPreferencesController;
-(id)init;
-(void)_disconnect;
-(void)_pushValue:(id)arg0 toPreference:(id)arg1 domain:(id)arg2 ;
-(void)createConnectionIfNecessary;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)performWithWriteability:(BOOL)arg0 operations:(id)arg1 ;
-(void)updateInputModes:(id)arg0 ;


@end


#endif