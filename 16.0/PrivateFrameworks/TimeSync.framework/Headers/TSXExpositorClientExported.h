// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXEXPOSITORCLIENTEXPORTED_H
#define TSXEXPOSITORCLIENTEXPORTED_H

@class NSString;
@protocol TSXExpositorClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXExpositorClient.h"

@interface TSXExpositorClientExported : NSObject <TSXExpositorClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXExpositorClient *object; // ivar: _object
@property (readonly) Class superclass;


-(void)clockManagerIsAvailable;
-(void)clockManagerIsUnavailable;
-(void)gPTPManagerIsAvailable;
-(void)gPTPManagerIsUnavailable;


@end


#endif