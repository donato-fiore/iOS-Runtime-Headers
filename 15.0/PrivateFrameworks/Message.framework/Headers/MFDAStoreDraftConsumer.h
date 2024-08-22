// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDASTOREDRAFTCONSUMER_H
#define MFDASTOREDRAFTCONSUMER_H

@class NSString;
@protocol MFDASyncResponseConsumer;

#import <Foundation/Foundation.h>

#import "MFError.h"

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MFError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serverId; // ivar: _serverId
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


-(void)handleResponse:(id)arg0 error:(id)arg1 ;


@end


#endif