// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NIALGORITHMCONVERGENCE_H
#define NIALGORITHMCONVERGENCE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NIAlgorithmConvergence : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *reasons; // ivar: _reasons
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 andReasons:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif