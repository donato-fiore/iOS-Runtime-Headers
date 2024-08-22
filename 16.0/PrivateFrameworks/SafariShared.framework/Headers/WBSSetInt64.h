// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSETINT64_H
#define WBSSETINT64_H

@protocol NSCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WBSSetInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying>

 {
    unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> _set;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) *void set;


+(BOOL)supportsSecureCoding;
-(BOOL)contains:(NSInteger)arg0 ;
-(id)commaSeparatedValues;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInt64:(NSInteger)arg0 ;
-(id)initWithMovableSet:(*void)arg0 ;
-(id)initWithSet:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif