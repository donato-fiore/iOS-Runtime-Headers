// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUIDAEMONAPPLICATION_H
#define AXUIDAEMONAPPLICATION_H

@class UIApplication;



@interface AXUIDaemonApplication : UIApplication



+(BOOL)_isSystemUIService;
+(BOOL)_isUIKitSystemProcess;
+(BOOL)_suppressesTextEffectsWindow;
+(BOOL)isChamoisSupportEnabled;
+(CGFloat)preferredWindowLevel;
+(id)_systemUIServiceClientSettings;
+(id)_systemUIServiceIdentifier;
-(BOOL)_shouldAllowKeyboardArbiter;
-(NSInteger)_frontMostAppOrientation;


@end


#endif