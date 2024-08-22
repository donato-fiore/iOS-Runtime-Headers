// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMPARAMETERGROUPSAVEDPATHELEMENT_H
#define KNANIMPARAMETERGROUPSAVEDPATHELEMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KNAnimParameterGroupSavedPathElement : NSObject <NSSecureCoding>



@property (nonatomic) CGPoint cp1; // ivar: _cp1
@property (nonatomic) CGPoint cp2; // ivar: _cp2
@property (nonatomic) NSUInteger elementType; // ivar: _elementType
@property (nonatomic) CGPoint toPoint; // ivar: _toPoint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif