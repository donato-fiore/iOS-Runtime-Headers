// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUITEMPLATERANGE_H
#define SAUITEMPLATERANGE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUITemplateRange : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger length;
@property (nonatomic) NSInteger location;
@property (readonly) Class superclass;


+(id)range;
+(id)rangeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif