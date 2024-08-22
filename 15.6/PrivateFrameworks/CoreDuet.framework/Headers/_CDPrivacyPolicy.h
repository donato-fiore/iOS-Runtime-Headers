// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDPRIVACYPOLICY_H
#define _CDPRIVACYPOLICY_H


#import <Foundation/Foundation.h>


@interface _CDPrivacyPolicy : NSObject

@property (readonly, nonatomic) BOOL canPersistOnStorage; // ivar: canPersistOnStorage
@property (readonly, nonatomic) CGFloat temporalPrecision; // ivar: temporalPrecision


+(id)sharedPrivacyPolicy;
-(id)description;
-(id)init;
-(id)initWithTemporalPrecision:(CGFloat)arg0 canPersistOnStorage:(BOOL)arg1 ;


@end


#endif