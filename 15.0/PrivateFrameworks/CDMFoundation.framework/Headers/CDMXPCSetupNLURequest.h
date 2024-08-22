// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCSETUPNLUREQUEST_H
#define CDMXPCSETUPNLUREQUEST_H

@class NSLocale, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDMXPCSetupNLURequest : NSObject <NSSecureCoding>



@property (retain) NSLocale *localeIdentifier; // ivar: _localeIdentifier
@property (retain) NSString *sandboxId; // ivar: _sandboxId


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif