// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSMPIDENTITY_H
#define IDSMPIDENTITY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSMPIdentity : NSObject <NSCopying>



@property (readonly, nonatomic) *void backingValue; // ivar: _backingValue


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBackingValue:(*void)arg0 ;
-(void)dealloc;


@end


#endif