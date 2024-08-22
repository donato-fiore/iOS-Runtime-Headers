// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSDICTIONARYINT64_H
#define WBSDICTIONARYINT64_H

@protocol NSCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying>

 {
    unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> _map;
}


@property (readonly, nonatomic) *void map;


+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMap:(*void)arg0 ;
-(id)initWithMovableMap:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif