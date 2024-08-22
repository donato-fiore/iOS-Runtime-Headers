// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSSLICEINFO_H
#define LSSLICEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSSliceInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int subtype; // ivar: _subtype
@property (readonly, nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSliceDescData:(struct LSSliceData )arg0 ;
-(id)initWithType:(int)arg0 subtype:(int)arg1 ;
-(struct LSSliceData )sliceValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif