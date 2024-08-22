// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSFONTSPECIFICATION_H
#define CHSFONTSPECIFICATION_H

@class NSString, NSArray, NSNumber;
@protocol BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CHSFontSpecification : NSObject <BSXPCSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger design; // ivar: _design
@property (copy, nonatomic) NSArray *fontFeatures; // ivar: _fontFeatures
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *size; // ivar: _size
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *weight; // ivar: _weight


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithFontSpecification:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif