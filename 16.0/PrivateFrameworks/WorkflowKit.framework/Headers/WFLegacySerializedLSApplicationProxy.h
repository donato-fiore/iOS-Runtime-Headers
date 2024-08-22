// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLEGACYSERIALIZEDLSAPPLICATIONPROXY_H
#define WFLEGACYSERIALIZEDLSAPPLICATIONPROXY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFLegacySerializedLSApplicationProxy : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif