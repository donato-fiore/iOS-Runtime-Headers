// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBWINDOWREFERENCE_H
#define _SBWINDOWREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _SBWindowReference : NSObject <NSCopying>



@property (readonly, nonatomic) id *object; // ivar: _object
@property (readonly, nonatomic) NSUInteger pointer;


+(id)referenceForObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithObject:(id)arg0 ;


@end


#endif