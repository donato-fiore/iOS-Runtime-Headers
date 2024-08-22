// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGLABELEDOBJECT_H
#define SGLABELEDOBJECT_H

@class NSString;


#import "SGObject.h"
#import "SGExtractionInfo.h"

@interface SGLabeledObject : SGObject

@property (readonly, nonatomic) SGExtractionInfo *extractionInfo; // ivar: _extractionInfo
@property (readonly, nonatomic) NSUInteger extractionType;
@property (readonly, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabeledObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 extractionInfo:(id)arg1 recordId:(id)arg2 ;
-(id)initWithLabel:(id)arg0 extractionType:(NSUInteger)arg1 recordId:(id)arg2 origin:(id)arg3 ;
-(id)localizedLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif