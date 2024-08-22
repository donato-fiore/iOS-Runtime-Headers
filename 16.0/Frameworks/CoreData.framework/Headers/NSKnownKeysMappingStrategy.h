// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSKNOWNKEYSMAPPINGSTRATEGY_H
#define NSKNOWNKEYSMAPPINGSTRATEGY_H

@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NSKnownKeysMappingStrategy : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly, nonatomic) *id keys;
@property (readonly, nonatomic) NSUInteger length;


+(BOOL)supportsSecureCoding;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)fastIndexForKnownKey:(id)arg0 ;
-(NSUInteger)indexForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForKeys:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initForKeys:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif