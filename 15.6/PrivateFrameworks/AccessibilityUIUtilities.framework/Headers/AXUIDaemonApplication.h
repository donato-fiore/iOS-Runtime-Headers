// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIDAEMONAPPLICATION_H
#define AXUIDAEMONAPPLICATION_H

@class UIApplication;



@interface AXUIDaemonApplication : UIApplication



+(BOOL)_isSystemUIService;
+(CGFloat)preferredWindowLevel;
+(id)_systemUIServiceClientSettings;
+(id)_systemUIServiceIdentifier;
-(NSInteger)_frontMostAppOrientation;


@end


#endif