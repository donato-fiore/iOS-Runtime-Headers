// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTION_H
#define LNACTION_H

@class NSString, NSNumber, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNValueType.h"

@interface LNAction : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *mangledTypeName; // ivar: _mangledTypeName
@property (readonly, nonatomic) BOOL openAppWhenRun; // ivar: _openAppWhenRun
@property (readonly, nonatomic) NSNumber *outputFlags; // ivar: _outputFlags
@property (readonly, nonatomic) LNValueType *outputType; // ivar: _outputType
@property (readonly, copy, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSInteger presentationStyle;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionWithOpenWhenRun:(BOOL)arg0 ;
-(id)actionWithParameters:(id)arg0 ;
-(id)actionWithPresentationStyle:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 openAppWhenRun:(BOOL)arg2 outputFlags:(id)arg3 outputType:(id)arg4 parameters:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 openAppWhenRun:(BOOL)arg2 parameters:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 presentationStyle:(NSInteger)arg2 parameters:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 parameters:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 presentationStyle:(NSInteger)arg1 parameters:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateParameterValuesOfValueType:(id)arg0 block:(id)arg1 ;


@end


#endif