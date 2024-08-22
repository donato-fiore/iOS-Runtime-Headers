// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATRUSTHANDLER_H
#define DATRUSTHANDLER_H

@class NSMutableDictionary;
@protocol DATrustHandlerDelegate;

#import <Foundation/Foundation.h>


@interface DATrustHandler : NSObject

@property (weak, nonatomic) NSObject<DATrustHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *haveWarnedAboutCertDict; // ivar: _haveWarnedAboutCertDict


-(BOOL)handleTrustChallenge:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)handleTrustChallenge:(id)arg0 forAccount:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)haveWarnedAboutCert:(id)arg0 forHost:(id)arg1 ;
-(BOOL)resetCertWarnings;
-(id)_serverSuffixesToAlwaysFail;
-(id)initWithDelegate:(id)arg0 ;
-(int)_actionForTrust:(struct __SecTrust *)arg0 host:(id)arg1 service:(id)arg2 ;
-(void)handleTrust:(struct __SecTrust *)arg0 forHost:(id)arg1 forAccount:(id)arg2 withCompletionBlock:(id)arg3 ;
-(void)setHaveWarnedAboutCert:(id)arg0 forHost:(id)arg1 ;


@end


#endif