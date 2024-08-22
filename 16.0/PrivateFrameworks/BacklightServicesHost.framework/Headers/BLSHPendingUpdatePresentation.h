// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPENDINGUPDATEPRESENTATION_H
#define BLSHPENDINGUPDATEPRESENTATION_H

@class NSString;
@protocol BLSHPendingOperation;

#import <Foundation/Foundation.h>

#import "BLSHBacklightEnvironmentPresentation.h"

@interface BLSHPendingUpdatePresentation : NSObject <BLSHPendingOperation>



@property (getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BLSHBacklightEnvironmentPresentation *presentation; // ivar: _presentation
@property (getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly) NSInteger type;


-(id)initWithPresentation:(id)arg0 ;


@end


#endif