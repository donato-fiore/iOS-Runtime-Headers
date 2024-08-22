// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPQUICKTYPEEXPLANATIONSET_H
#define PPQUICKTYPEEXPLANATIONSET_H

@class NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding>

 {
    NSMutableSet *_set;
}




+(BOOL)supportsSecureCoding;
+(id)stringFromExplanation:(unsigned char)arg0 ;
+(id)uniqueKeycodeFromExplanation:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuickTypeExplanationSet:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)push:(unsigned char)arg0 ;


@end


#endif