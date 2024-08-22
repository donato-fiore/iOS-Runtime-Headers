// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITASKQUEUINGOPTIONS_H
#define TRITASKQUEUINGOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger duplicateTaskResolution; // ivar: _duplicateTaskResolution


+(BOOL)supportsSecureCoding;
+(id)defaultOptionsWithIgnoreDuplicates;
+(id)optionsWithDuplicateTaskResolution:(NSUInteger)arg0 ;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDuplicateTaskResolution:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDuplicateTaskResolution:(NSUInteger)arg0 ;
-(void)_swizzledEncodeWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif