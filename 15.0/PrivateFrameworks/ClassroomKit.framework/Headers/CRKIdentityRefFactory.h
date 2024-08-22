// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKIDENTITYREFFACTORY_H
#define CRKIDENTITYREFFACTORY_H


#import <Foundation/Foundation.h>

#import "CRKIdentityConfiguration.h"

@interface CRKIdentityRefFactory : NSObject

@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // ivar: _configuration


-(*void)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)arg0 ;
-(id)certificateParametersWithCMSAlgorithm:(*void)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)keyParameters;
-(id)subject;
-(struct __SecIdentity *)makeIdentityRefWithError:(*id)arg0 ;
-(void)addClientAndServerAuthEKUsToParameters:(id)arg0 ;
-(void)safeRelease:(*void)arg0 ;


@end


#endif