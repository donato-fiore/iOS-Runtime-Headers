// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCONTAINERCOALESCINGTOKEN_H
#define MSPCONTAINERCOALESCINGTOKEN_H

@class NSString;
@protocol MSPContainerCoalescingToken, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "MSPContainer.h"

@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken>

 {
    MSPContainer *_container;
    id<NSObject><NSCopying> *_context;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithContainerOwner:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)endCoalescingEdits;


@end


#endif