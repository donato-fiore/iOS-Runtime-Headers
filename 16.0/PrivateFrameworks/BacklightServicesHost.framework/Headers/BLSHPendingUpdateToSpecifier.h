// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPENDINGUPDATETOSPECIFIER_H
#define BLSHPENDINGUPDATETOSPECIFIER_H

@class NSString;
@protocol BLSHPendingOperation;

#import <Foundation/Foundation.h>

#import "BLSHPresentationDateSpecifier.h"

@interface BLSHPendingUpdateToSpecifier : NSObject <BLSHPendingOperation>



@property (getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BLSHPresentationDateSpecifier *specifier; // ivar: _specifier
@property (getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly) NSInteger type;


-(id)initWithSpecifier:(id)arg0 ;


@end


#endif