// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWEAKOVERLAYSERVICE_H
#define _UIWEAKOVERLAYSERVICE_H

@class NSString;
@protocol _UIOverlayServiceServerToClientInterface;

#import <Foundation/Foundation.h>

#import "_UIOverlayService.h"

@interface _UIWeakOverlayService : NSObject <_UIOverlayServiceServerToClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) _UIOverlayService *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 ;
-(void)handleOverlayResponse:(id)arg0 ;


@end


#endif