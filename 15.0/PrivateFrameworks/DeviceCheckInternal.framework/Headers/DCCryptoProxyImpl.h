// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCCRYPTOPROXYIMPL_H
#define DCCRYPTOPROXYIMPL_H

@class NSString;
@protocol DCCryptoProxy;

#import <Foundation/Foundation.h>


@interface DCCryptoProxyImpl : NSObject <DCCryptoProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_fetchPublicKey:(id)arg0 ;
-(void)fetchOpaqueBlobWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif