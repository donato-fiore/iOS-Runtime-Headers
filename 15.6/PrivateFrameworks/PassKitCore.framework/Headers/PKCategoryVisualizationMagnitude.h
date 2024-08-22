// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCATEGORYVISUALIZATIONMAGNITUDE_H
#define PKCATEGORYVISUALIZATIONMAGNITUDE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCategoryVisualizationMagnitude : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger bucket; // ivar: _bucket
@property (nonatomic) CGFloat magnitude; // ivar: _magnitude
@property (copy, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif