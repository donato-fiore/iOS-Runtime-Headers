// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HSCMBASEOBJECT_H
#define HSCMBASEOBJECT_H

@class NSString;
@protocol HSCMBaseObjectInterface;

#import <Foundation/Foundation.h>


@interface HSCMBaseObject : NSObject <HSCMBaseObjectInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *OpaqueCMBaseObject underlyingObject; // ivar: _underlyingObject


+(id)statusDescription:(int)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(struct __CFString *)arg1 error:(*id)arg2 ;
-(id)initWithBaseObject:(struct OpaqueCMBaseObject *)arg0 ;
-(id)valueForProperty:(struct __CFString *)arg0 error:(*id)arg1 ;


@end


#endif