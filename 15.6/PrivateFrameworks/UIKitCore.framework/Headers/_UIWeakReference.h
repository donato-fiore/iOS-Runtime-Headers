// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIWEAKREFERENCE_H
#define _UIWEAKREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIWeakReference : NSObject <NSCopying>



@property (weak, nonatomic) id *object; // ivar: _object


+(id)weakReferenceWrappingObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;


@end


#endif