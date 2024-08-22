// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSCANOPENURLMANAGER_H
#define _LSCANOPENURLMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSCanOpenURLManager : NSObject {
    NSMutableDictionary *_canOpenURLsMap;
    NSObject<OS_dispatch_queue> *_canOpenURLsMapQueue;
    int _saveFlag;
}


@property (readonly) NSUInteger schemeQueryLimit;


+(id)queryForApplicationsAvailableForOpeningURL:(id)arg0 ;
+(id)sharedManager;
+(struct BindingEvaluator )bindingEvaluatorForScheme:(id)arg0 ;
-(?)findApplicationBundleID:(?)arg0 bundleData:(?)arg1 contextforXPCConnection;
-(BOOL)canOpenURL:(id)arg0 publicSchemes:(BOOL)arg1 privateSchemes:(BOOL)arg2 XPCConnection:(id)arg3 error:(*id)arg4 ;
-(BOOL)internalCanOpenURL:(id)arg0 publicSchemes:(BOOL)arg1 privateSchemes:(BOOL)arg2 XPCConnection:(id)arg3 error:(*id)arg4 ;
-(BOOL)isBundleID:(unsigned int)arg0 bundleData:(struct LSBundleData *)arg1 context:(struct LSContext *)arg2 allowedToCheckScheme:(id)arg3 error:(*id)arg4 ;
-(BOOL)isXPCConnection:(id)arg0 allowedToCheckScheme:(id)arg1 error:(*id)arg2 ;
-(BOOL)legacy_isBundleID:(unsigned int)arg0 bundleData:(struct LSBundleData *)arg1 context:(struct LSContext *)arg2 allowedToCheckScheme:(id)arg3 error:(*id)arg4 ;
-(NSInteger)schemeTypeOfScheme:(id)arg0 ;
-(id)copySchemesMap;
-(id)init;
-(void)getIsURL:(id)arg0 alwaysCheckable:(*BOOL)arg1 hasHandler:(*BOOL)arg2 ;
-(void)writeSchemesMap;


@end


#endif