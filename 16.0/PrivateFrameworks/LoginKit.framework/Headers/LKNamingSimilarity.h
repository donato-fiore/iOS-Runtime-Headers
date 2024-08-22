// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKNAMINGSIMILARITY_H
#define LKNAMINGSIMILARITY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LKNamingSimilarity : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger similarity; // ivar: _similarity


+(BOOL)supportsSecureCoding;
+(id)namingSimilarityWithSimilarity:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLKNamingSimilarity:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif