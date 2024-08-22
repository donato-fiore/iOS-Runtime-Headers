// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUICOLOR_H
#define SAUICOLOR_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUIColor : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSNumber *alpha;
@property (nonatomic) NSInteger blueValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger greenValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger redValue;
@property (readonly) Class superclass;


+(id)color;
+(id)colorWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif