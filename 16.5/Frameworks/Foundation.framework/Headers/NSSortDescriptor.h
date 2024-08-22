// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSORTDESCRIPTOR_H
#define NSSORTDESCRIPTOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger _sortDescriptorFlags;
    NSString *_key;
    SEL _selector;
    id *_selectorOrBlock;
}


@property (readonly) BOOL ascending;
@property (readonly) id *comparator;
@property (readonly, copy) NSString *key;
@property (readonly, retain) id *reversedSortDescriptor;
@property (readonly) SEL selector;


+(BOOL)supportsSecureCoding;
+(id)_defaultSelectorName;
+(id)sortDescriptorWithKey:(id)arg0 ;
+(id)sortDescriptorWithKey:(id)arg0 ascending:(BOOL)arg1 ;
+(id)sortDescriptorWithKey:(id)arg0 ascending:(BOOL)arg1 comparator:(id)arg2 ;
+(id)sortDescriptorWithKey:(id)arg0 ascending:(BOOL)arg1 reverseNullOrder:(BOOL)arg2 ;
+(id)sortDescriptorWithKey:(id)arg0 ascending:(BOOL)arg1 selector:(SEL)arg2 ;
+(void)initialize;
-(BOOL)_isEqualToSortDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reverseNullOrder;
-(NSInteger)compareObject:(id)arg0 toObject:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 ascending:(BOOL)arg1 ;
-(id)initWithKey:(id)arg0 ascending:(BOOL)arg1 comparator:(id)arg2 ;
-(id)initWithKey:(id)arg0 ascending:(BOOL)arg1 reverseNullOrder:(BOOL)arg2 ;
-(id)initWithKey:(id)arg0 ascending:(BOOL)arg1 reverseNullOrder:(BOOL)arg2 selector:(SEL)arg3 ;
-(id)initWithKey:(id)arg0 ascending:(BOOL)arg1 selector:(SEL)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(void)_disallowEvaluation;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setReverseNullOrder:(BOOL)arg0 ;


@end


#endif