// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRICKRECORDPROGRESS_H
#define TRICKRECORDPROGRESS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRICKRecordProgress : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly, nonatomic) NSUInteger transferred; // ivar: _transferred


+(id)progressWithSize:(NSUInteger)arg0 transferred:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProgress:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementSize:(NSUInteger)arg0 ;
-(id)copyWithReplacementTransferred:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSize:(NSUInteger)arg0 transferred:(NSUInteger)arg1 ;


@end


#endif