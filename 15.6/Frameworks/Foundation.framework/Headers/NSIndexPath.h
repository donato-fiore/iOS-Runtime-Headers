// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSINDEXPATH_H
#define NSINDEXPATH_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding>

 {
    *NSUInteger _indexes;
    NSUInteger _length;
    *void _reserved;
}


@property (readonly) NSUInteger length;


+(BOOL)supportsSecureCoding;
+(id)indexPath;
+(id)indexPathWithIndex:(NSUInteger)arg0 ;
+(id)indexPathWithIndexes:(*NSUInteger)arg0 length:(NSUInteger)arg1 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indexAtPosition:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexPathByAddingIndex:(NSUInteger)arg0 ;
-(id)indexPathByRemovingLastIndex;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 ;
-(id)initWithIndexes:(*NSUInteger)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getIndexes:(*NSUInteger)arg0 ;
-(void)getIndexes:(*NSUInteger)arg0 range:(struct _NSRange )arg1 ;


@end


#endif