// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPFIRMWAREUPDATEREADINESS_H
#define HAPFIRMWAREUPDATEREADINESS_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPStagingNotReadyReasonsWrapper.h"
#import "HAPUpdateNotReadyReasonsWrapper.h"

@interface HAPFirmwareUpdateReadiness : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPStagingNotReadyReasonsWrapper *stagingNotReadyReasons; // ivar: _stagingNotReadyReasons
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPUpdateNotReadyReasonsWrapper *updateNotReadyReasons; // ivar: _updateNotReadyReasons


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStagingNotReadyReasons:(id)arg0 updateNotReadyReasons:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif