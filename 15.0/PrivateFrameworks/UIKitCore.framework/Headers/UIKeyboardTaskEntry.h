// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDTASKENTRY_H
#define UIKEYBOARDTASKENTRY_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIKeyboardTaskEntry : NSObject <NSCopying>

 {
    id *__task;
}


@property (readonly, retain, nonatomic) NSArray *originatingStack; // ivar: __creationStack


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTask:(id)arg0 ;
-(void)dealloc;
-(void)execute:(id)arg0 ;


@end


#endif