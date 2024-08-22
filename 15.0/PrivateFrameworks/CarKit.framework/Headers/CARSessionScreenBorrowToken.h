// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARSESSIONSCREENBORROWTOKEN_H
#define CARSESSIONSCREENBORROWTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CARSession.h"

@interface CARSessionScreenBorrowToken : NSObject

@property (readonly, copy, nonatomic) NSString *client; // ivar: _client
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, weak, nonatomic) CARSession *session; // ivar: _session


-(id)initWithSession:(id)arg0 client:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
-(void)unborrowToken;


@end


#endif