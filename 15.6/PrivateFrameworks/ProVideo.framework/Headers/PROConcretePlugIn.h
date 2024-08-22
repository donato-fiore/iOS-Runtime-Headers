// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROCONCRETEPLUGIN_H
#define PROCONCRETEPLUGIN_H

@class NSBundle, NSDictionary, NSString, NSURL;
@protocol NSCopying, PROPlugInDelegate, PKPlugIn;


#import "PROPlugIn.h"
#import "PROPlugInGroup.h"

@interface PROConcretePlugIn : PROPlugIn <NSCopying>

 {
    NSBundle *bundle;
    *__CFUUID uuidRef;
    NSDictionary *infoDictionary;
    PROPlugInGroup *group;
    NSString *localizationTableName;
    NSURL *helpURL;
    id *sharedInstance;
    ? plugInFlags;
    id<PROPlugInDelegate> *delegate;
    id<PKPlugIn> *pluginKitPlug;
    BOOL entirelyOutOfProcess;
    BOOL _isBlocked;
    NSString *_blockedLookupKey;
}




-(BOOL)isBlocked;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPlugIn:(id)arg0 ;
-(Class)plugInClass;
-(NSUInteger)hash;
-(id)apiUsedByPlugInForProtocol:(id)arg0 ;
-(id)blockedLookupKey;
-(id)bundle;
-(id)className;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)delegate;
-(id)description;
-(id)displayName;
-(id)group;
-(id)helpURL;
-(id)implementedProtocols;
-(id)infoDictionary;
-(id)infoString;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 delegate:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 delegate:(id)arg2 pluginKitPlug:(id)arg3 ;
-(id)plugInInstance;
-(id)pluginKitPlug;
-(id)sharedPlugInInstance;
-(id)uuidString;
-(id)vendorName;
-(id)version;
-(struct __CFUUID *)uuid;
-(void)dealloc;
-(void)reportError:(id)arg0 ;
-(void)setBlockedLookupKey:(id)arg0 pluginName:(id)arg1 version:(id)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIsBlocked:(BOOL)arg0 ;


@end


#endif