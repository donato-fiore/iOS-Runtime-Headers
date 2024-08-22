// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDATADESCRIPTOR_H
#define SXDATADESCRIPTOR_H

@class NSString;


#import "SXJSONObject.h"
#import "SXDataFormat.h"
#import "SXFormattedText.h"

@interface SXDataDescriptor : SXJSONObject

@property (readonly, nonatomic) NSUInteger dataType;
@property (readonly, nonatomic) SXDataFormat *format;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) SXFormattedText *label;


-(NSUInteger)dataTypeWithValue:(id)arg0 withType:(int)arg1 ;
-(id)description;
-(id)formatWithValue:(id)arg0 withType:(int)arg1 ;
-(id)labelWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif