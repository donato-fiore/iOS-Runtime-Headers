// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTCOMPARISONENTITY_H
#define SASTCOMPARISONENTITY_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIDecoratedText.h"
#import "SAUINanoImageResource.h"

@interface SASTComparisonEntity : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;


+(id)comparisonEntity;
+(id)comparisonEntityWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif