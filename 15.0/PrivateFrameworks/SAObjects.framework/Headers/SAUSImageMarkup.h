// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUSIMAGEMARKUP_H
#define SAUSIMAGEMARKUP_H

@class NSString;
@protocol SAUSMarkup, SAAceSerializable;


#import "AceObject.h"
#import "SAUIImageResource.h"

@interface SAUSImageMarkup : AceObject <SAUSMarkup, SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIImageResource *imageResource;
@property (readonly) Class superclass;


+(id)imageMarkup;
+(id)imageMarkupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif