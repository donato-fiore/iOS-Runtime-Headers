// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPSETQUEUEQUEUEFILTER_H
#define SAMPSETQUEUEQUEUEFILTER_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mediaItemProperty;
@property (copy, nonatomic) NSString *operation;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(id)setQueueQueueFilter;
+(id)setQueueQueueFilterWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif