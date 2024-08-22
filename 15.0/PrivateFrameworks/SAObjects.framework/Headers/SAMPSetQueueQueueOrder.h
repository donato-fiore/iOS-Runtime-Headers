// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPSETQUEUEQUEUEORDER_H
#define SAMPSETQUEUEQUEUEORDER_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL descending;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mediaItemProperty;
@property (readonly) Class superclass;


+(id)setQueueQueueOrder;
+(id)setQueueQueueOrderWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif