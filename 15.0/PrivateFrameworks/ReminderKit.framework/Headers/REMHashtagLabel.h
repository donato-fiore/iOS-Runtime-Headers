// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMHASHTAGLABEL_H
#define REMHASHTAGLABEL_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REMHashtagLabel : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHashtagLabel:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif