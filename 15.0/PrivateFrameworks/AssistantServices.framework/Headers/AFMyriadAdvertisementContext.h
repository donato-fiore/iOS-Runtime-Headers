// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFMYRIADADVERTISEMENTCONTEXT_H
#define AFMYRIADADVERTISEMENTCONTEXT_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFMyriadAdvertisementContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *contextData; // ivar: _contextData
@property (readonly, nonatomic) CGFloat contextFetchDelay; // ivar: _contextFetchDelay
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeneration:(NSUInteger)arg0 contextData:(id)arg1 contextFetchDelay:(CGFloat)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif