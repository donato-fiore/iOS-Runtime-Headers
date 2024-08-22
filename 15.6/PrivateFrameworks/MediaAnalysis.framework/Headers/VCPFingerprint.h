// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPFINGERPRINT_H
#define VCPFINGERPRINT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VCPFingerprint : NSObject

@property (readonly) NSString *adjusted; // ivar: _adjusted
@property (readonly) NSString *master; // ivar: _master


+(id)fingerprintWithMaster:(id)arg0 adjusted:(id)arg1 ;
-(BOOL)isEqualToFingerprint:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMaster:(id)arg0 adjusted:(id)arg1 ;


@end


#endif