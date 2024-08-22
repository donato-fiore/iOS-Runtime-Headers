// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDSECUREBACKUPPROXYIMPL_H
#define CDPDSECUREBACKUPPROXYIMPL_H

@class CDPContext, NSString;
@protocol CDPDSecureBackupProxy;

#import <Foundation/Foundation.h>


@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>



@property (retain, nonatomic) CDPContext *cdpContext; // ivar: _cdpContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)disableWithInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)enableWithInfo:(id)arg0 error:(*id)arg1 ;
-(id)accountInfoWithInfo:(id)arg0 error:(*id)arg1 ;
-(id)activityTypeString;
-(id)initWithContext:(id)arg0 ;
-(id)recoverWithInfo:(id)arg0 error:(*id)arg1 ;
-(id)secureBackupContext;
-(id)secureBackupContextWithInfo:(id)arg0 ;
-(void)cacheRecoveryKey:(id)arg0 completionBlock:(id)arg1 ;
-(void)disableWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)enableWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)uncacheAllSecrets;


@end


#endif