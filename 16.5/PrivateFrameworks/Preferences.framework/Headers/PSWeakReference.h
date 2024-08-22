// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSWEAKREFERENCE_H
#define PSWEAKREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSWeakReference : NSObject <NSCopying>

 {
    id *_location;
}




+(id)weakReferenceWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)object;


@end


#endif