// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SARDACEREWRITEMESSAGE_H
#define SARDACEREWRITEMESSAGE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SARDAceRewriteMessage : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *rewriteType;
@property (copy, nonatomic) NSString *rewrittenUtterance;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif