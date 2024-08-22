// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFDEVICECONTEXTHISTORYCONFIGURATION_H
#define AFDEVICECONTEXTHISTORYCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFDeviceContextHistoryConfiguration : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger historyBufferSize; // ivar: _historyBufferSize
@property (readonly, nonatomic) BOOL keepsHistory; // ivar: _keepsHistory
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithKeepsHistory:(BOOL)arg0 historyBufferSize:(NSUInteger)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif