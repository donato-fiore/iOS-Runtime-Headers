// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRATTESTATIONBASEDEVICEHANDLER_H
#define CRATTESTATIONBASEDEVICEHANDLER_H

@class NSMutableDictionary;
@protocol CRAttestationProtocol;

#import <Foundation/Foundation.h>


@interface CRAttestationBaseDeviceHandler : NSObject <CRAttestationProtocol>



@property (retain, nonatomic) NSMutableDictionary *componentsMapping; // ivar: componentsMapping


+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)challengeComponentsWith:(id)arg0 withReply:(id)arg1 ;
-(void)getStrongComponentsWithReply:(id)arg0 ;


@end


#endif