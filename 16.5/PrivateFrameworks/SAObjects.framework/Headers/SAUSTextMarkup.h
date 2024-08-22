// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUSTEXTMARKUP_H
#define SAUSTEXTMARKUP_H

@class NSString;
@protocol SAUSMarkup, SAAceSerializable;


#import "AceObject.h"

@interface SAUSTextMarkup : AceObject <SAUSMarkup, SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emphasized;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)textMarkupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif