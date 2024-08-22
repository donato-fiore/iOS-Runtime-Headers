// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPORDER_H
#define SAMPORDER_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMPOrder : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL descending;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mediaItemProperty;
@property (readonly) Class superclass;


+(id)order;
+(id)orderWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif