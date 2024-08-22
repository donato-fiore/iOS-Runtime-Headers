// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROPLUGIN_H
#define PROPLUGIN_H


#import <Foundation/Foundation.h>


@interface PROPlugIn : NSObject



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)is3rdParty;
-(BOOL)isBlocked;
-(BOOL)isEqualToPlugIn:(id)arg0 ;
-(Class)plugInClass;
-(id)apiUsedByPlugInForProtocol:(id)arg0 ;
-(id)blockedLookupKey;
-(id)bundle;
-(id)className;
-(id)delegate;
-(id)displayName;
-(id)group;
-(id)helpURL;
-(id)implementedProtocols;
-(id)infoDictionary;
-(id)infoString;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 delegate:(id)arg2 ;
-(id)plugInInstance;
-(id)pluginKitPlug;
-(id)sharedPlugInInstance;
-(id)version;
-(struct __CFUUID *)uuid;
-(void)setBlockedLookupKey:(id)arg0 pluginName:(id)arg1 version:(id)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIsBlocked:(BOOL)arg0 ;


@end


#endif