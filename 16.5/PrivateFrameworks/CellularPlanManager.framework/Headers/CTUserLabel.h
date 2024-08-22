// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTUSERLABEL_H
#define CTUSERLABEL_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTUserLabel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *labelId; // ivar: _labelId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexInPredefinedLabels:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 label:(id)arg1 labelId:(id)arg2 ;
-(id)initWithLabel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif