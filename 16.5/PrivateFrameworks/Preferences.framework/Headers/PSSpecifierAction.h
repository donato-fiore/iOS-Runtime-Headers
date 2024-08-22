// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSPECIFIERACTION_H
#define PSSPECIFIERACTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSSpecifierAction : NSObject <NSCopying>



@property (copy, nonatomic) id *getter; // ivar: _getter
@property (copy, nonatomic) id *setter; // ivar: _setter


+(id)actionWithBoolDetailClass:(Class)arg0 ;
// +(id)actionWithGetter:(id)arg0 setter:(unk)arg1  ;
+(id)actionWithTarget:(id)arg0 getterSelector:(SEL)arg1 setterSelector:(SEL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif