// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSPREYMUTABLEREQUEST_H
#define OSPREYMUTABLEREQUEST_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface OspreyMutableRequest : NSObject {
    NSMutableDictionary *_additionalHeaders;
}


@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (copy, nonatomic) NSString *clientTraceIdentifier; // ivar: _clientTraceIdentifier
@property (nonatomic, getter=isCompressionEnabled) BOOL compressionEnabled; // ivar: _compressionEnabled
@property (nonatomic) BOOL enableDeviceAuthentication; // ivar: _enableDeviceAuthentication
@property (nonatomic) BOOL forceHTTPv2; // ivar: _forceHTTPv2
@property (readonly, nonatomic) NSString *methodName; // ivar: _methodName
@property (nonatomic) BOOL requireAbsintheAuthentication;


-(id)buildInternalRequest;
-(id)initWithMethodName:(id)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;


@end


#endif