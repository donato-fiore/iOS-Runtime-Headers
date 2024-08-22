// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIMAGEDESCRIPTOR_H
#define PKIMAGEDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKImageDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL hasBackground; // ivar: _hasBackground
@property (readonly, nonatomic) NSInteger tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif