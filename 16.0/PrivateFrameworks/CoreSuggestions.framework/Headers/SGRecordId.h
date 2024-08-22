// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGRECORDID_H
#define SGRECORDID_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGRecordId : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _internalEntityId;
}




+(BOOL)supportsSecureCoding;
+(id)recordIdWithInternalEntityId:(NSInteger)arg0 ;
+(id)recordIdWithNumericValue:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecordId:(id)arg0 ;
-(NSInteger)internalEntityId;
-(NSInteger)numericValue;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalEntityId:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif