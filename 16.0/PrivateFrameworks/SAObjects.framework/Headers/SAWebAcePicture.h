// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWEBACEPICTURE_H
#define SAWEBACEPICTURE_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAWebAcePicture : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *format;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *height;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *width;


+(id)acePicture;
+(id)acePictureWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif