// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNPARAMETERSUBSTITUTION_H
#define LNPARAMETERSUBSTITUTION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNParameterSubstitution : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *parameterIdentifier; // ivar: _parameterIdentifier
@property (readonly, copy, nonatomic) NSArray *substitutionValues; // ivar: _substitutionValues


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterIdentifier:(id)arg0 substitutionValues:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif