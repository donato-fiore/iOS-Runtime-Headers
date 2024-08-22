// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPECPUBLICKEYFACTORY_H
#define TPECPUBLICKEYFACTORY_H

@class NSString;
@protocol TPPublicKeyFactory;

#import <Foundation/Foundation.h>


@interface TPECPublicKeyFactory : NSObject <TPPublicKeyFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)keyFromSPKI:(id)arg0 ;


@end


#endif