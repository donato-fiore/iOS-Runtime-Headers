// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CESRMODELPROPERTIES_H
#define CESRMODELPROPERTIES_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CESRModelProperties : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *modelRoot; // ivar: _modelRoot
@property (readonly, copy, nonatomic) NSString *modelType; // ivar: _modelType
@property (readonly, copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelVersion:(id)arg0 modelType:(id)arg1 modelRoot:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif