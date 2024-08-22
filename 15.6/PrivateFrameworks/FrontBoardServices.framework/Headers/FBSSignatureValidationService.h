// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSIGNATUREVALIDATIONSERVICE_H
#define FBSSIGNATUREVALIDATIONSERVICE_H

@class NSString;
@protocol FBSApplicationTrustDataProvider, _FBSMISInterfaceWrapper;

#import <Foundation/Foundation.h>


@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider>

 {
    id<_FBSMISInterfaceWrapper> *_misInterfaceWrapper;
}


@property (nonatomic) BOOL authoritative; // ivar: _authoritative
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_validateApp:(id)arg0 ;
-(NSUInteger)trustStateForApplication:(id)arg0 ;
-(id)_initWithMISInterfaceWrapper:(id)arg0 ;
-(id)init;
-(unsigned int)signatureVersionForApp:(id)arg0 ;
-(void)_logTrustState:(NSUInteger)arg0 forApp:(id)arg1 reason:(id)arg2 ;


@end


#endif