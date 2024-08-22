// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAANSWEROBJECTLINE_H
#define SAANSWEROBJECTLINE_H

@class NSString, NSURL, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIImageResource.h"

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSNumber *imageInverted;
@property (retain, nonatomic) SAUIImageResource *imageResource;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)objectLine;
+(id)objectLineWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif