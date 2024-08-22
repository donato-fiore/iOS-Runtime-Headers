// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCMSATTRIBUTE_H
#define MSCMSATTRIBUTE_H

@class NSData, NSArray;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>

#import "MSOID.h"

@interface MSCMSAttribute : NSObject <MSCMSAttributeCoder>



@property (retain) NSData *attributeDERData; // ivar: _attributeDERData
@property (readonly, retain) MSOID *attributeType; // ivar: _attributeType
@property (readonly, retain) NSArray *attributeValues; // ivar: _attributeValues
@property *Attribute encodedAttribute; // ivar: _encodedAttribute


+(id)decodeAttribute:(struct Attribute *)arg0 error:(*id)arg1 ;
-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithAttributeStruct:(struct Attribute *)arg0 error:(*id)arg1 ;
-(id)initWithAttributeType:(id)arg0 values:(id)arg1 ;
-(id)initWithDER:(id)arg0 ;
-(struct Attribute *)generateAttributeStruct;
-(void)dealloc;


@end


#endif