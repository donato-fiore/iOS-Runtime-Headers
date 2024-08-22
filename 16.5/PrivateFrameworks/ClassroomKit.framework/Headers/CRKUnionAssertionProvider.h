// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKUNIONASSERTIONPROVIDER_H
#define CRKUNIONASSERTIONPROVIDER_H

@class NSArray;
@protocol CATAssertionProviding;

#import <Foundation/Foundation.h>


@interface CRKUnionAssertionProvider : NSObject <CATAssertionProviding>



@property (readonly, copy, nonatomic) NSArray *assertionProviders; // ivar: _assertionProviders


+(id)activeIDSClassSessionAssertionProviderWithPrefix:(id)arg0 ;
-(id)acquireAssertion;
-(id)initWithAssertionProviders:(id)arg0 ;


@end


#endif