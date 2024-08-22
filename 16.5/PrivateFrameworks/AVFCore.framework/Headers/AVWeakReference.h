// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVWEAKREFERENCE_H
#define AVWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface AVWeakReference : NSObject

@property (readonly, weak) id *referencedObject;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(id)initWithReferencedObject:(id)arg0 ;


@end


#endif