// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSHAREDKEYSET_H
#define NSSHAREDKEYSET_H

@protocol NSFastEnumeration, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSSharedKeySet.h"

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>

 {
    unsigned char _algorithmType;
}


@property unsigned int M; // ivar: _M
@property unsigned int factor; // ivar: _factor
@property char * g; // ivar: _g
@property *id keys; // ivar: _keys
@property unsigned int numKey; // ivar: _numKey
@property *void rankTable; // ivar: _rankTable
@property *unsigned int seeds; // ivar: _seeds
@property unsigned char select; // ivar: _select
@property (retain) NSSharedKeySet *subSharedKeySet; // ivar: _subSharedKeySet


+(id)keySetWithKeys:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)indexForKey:(id)arg0 ;
-(NSUInteger)keySetCount;
-(NSUInteger)maximumIndex;
-(id)allKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeys:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif