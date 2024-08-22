// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MSPCONTAINEREDIT_H
#define _MSPCONTAINEREDIT_H

@class NSString;
@protocol MSPContainerEdit;

#import <Foundation/Foundation.h>


@interface _MSPContainerEdit : NSObject <MSPContainerEdit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(void)ifAddition:(id)arg0 ifRemoval:(unk)arg1 ifReplacement:(id)arg2 ifContentUpdate:(unk)arg3 ifReplacedEntirely:(id)arg4  ;
-(void)useImmutableObjectsFromMap:(id)arg0 intermediateMutableObjectTransferBlock:(id)arg1 ;


@end


#endif