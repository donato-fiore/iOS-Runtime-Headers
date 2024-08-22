// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABSNAPSHOTREQUEST_H
#define TABSNAPSHOTREQUEST_H

@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface TabSnapshotRequest : NSObject

@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGFloat topBackdropHeight; // ivar: _topBackdropHeight


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSize:(struct CGSize )arg0 topBackdropHeight:(CGFloat)arg1 options:(NSUInteger)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 topBackdropHeight:(CGFloat)arg1 options:(NSUInteger)arg2 identifier:(id)arg3 ;


@end


#endif