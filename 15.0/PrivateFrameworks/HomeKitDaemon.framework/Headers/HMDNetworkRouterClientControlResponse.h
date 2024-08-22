// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERCLIENTCONTROLRESPONSE_H
#define HMDNETWORKROUTERCLIENTCONTROLRESPONSE_H

@class NSString, NSMutableArray;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterClientControlResponse : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *operationResponses; // ivar: _operationResponses
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperationResponses:(id)arg0 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif