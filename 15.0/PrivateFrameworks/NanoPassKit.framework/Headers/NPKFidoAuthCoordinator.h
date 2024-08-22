// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKFIDOAUTHCOORDINATOR_H
#define NPKFIDOAUTHCOORDINATOR_H

@class LAContext;

#import <Foundation/Foundation.h>


@interface NPKFidoAuthCoordinator : NSObject

@property (readonly, nonatomic) LAContext *context; // ivar: _context


-(BOOL)_isDeviceLocked;
-(BOOL)_isWristDetectDisabled;
-(void)clearContext;
-(void)requestAuthorizationWithCompletion:(id)arg0 ;


@end


#endif