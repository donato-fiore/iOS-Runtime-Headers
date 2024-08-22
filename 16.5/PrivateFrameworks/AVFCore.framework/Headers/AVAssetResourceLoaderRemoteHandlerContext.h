// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETRESOURCELOADERREMOTEHANDLERCONTEXT_H
#define AVASSETRESOURCELOADERREMOTEHANDLERCONTEXT_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger authHandlerObjectID; // ivar: _authHandlerObjectID
@property (readonly, nonatomic) NSUInteger contentKeySessionHandlerObjectID; // ivar: _contentKeySessionHandlerObjectID
@property (readonly, nonatomic) NSUInteger customURLHandlerObjectID; // ivar: _customURLHandlerObjectID
@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint; // ivar: _endpoint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 customURLHandlerObjectID:(NSUInteger)arg1 authHandlerObjectID:(NSUInteger)arg2 contentKeySessionHandlerObjectID:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif