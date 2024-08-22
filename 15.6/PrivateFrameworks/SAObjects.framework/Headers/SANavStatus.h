// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANAVSTATUS_H
#define SANAVSTATUS_H

@class NSString;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SANavStatus : AceObject <SABackgroundContextObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *statusValue;
@property (readonly) Class superclass;


+(id)navStatus;
+(id)navStatusWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif