// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPSECURITYSESSIONDELEGATEADDITIONALDERIVEDKEYTUPLE_H
#define HAPSECURITYSESSIONDELEGATEADDITIONALDERIVEDKEYTUPLE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface HAPSecuritySessionDelegateAdditionalDerivedKeyTuple : NSObject

@property (readonly, nonatomic) NSData *infoData; // ivar: _infoData
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSData *saltData; // ivar: _saltData


+(id)new;
-(id)init;
-(id)initWithName:(id)arg0 saltData:(id)arg1 infoData:(id)arg2 ;


@end


#endif