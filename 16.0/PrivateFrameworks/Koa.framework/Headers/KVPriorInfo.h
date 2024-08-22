// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVPRIORINFO_H
#define KVPRIORINFO_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface KVPriorInfo : NSObject <NSSecureCoding, NSCopying>

 {
    unsigned int _ordinality;
    float _score;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPriorInfo:(id)arg0 ;
-(NSUInteger)hash;
-(float)score;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrdinality:(unsigned int)arg0 score:(float)arg1 ;
-(unsigned int)ordinality;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif