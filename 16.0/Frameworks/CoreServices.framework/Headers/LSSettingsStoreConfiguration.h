// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSSETTINGSSTORECONFIGURATION_H
#define LSSETTINGSSTORECONFIGURATION_H

@class NSXPCListenerEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSSettingsStoreConfiguration : NSObject <NSSecureCoding>



@property (readonly) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif