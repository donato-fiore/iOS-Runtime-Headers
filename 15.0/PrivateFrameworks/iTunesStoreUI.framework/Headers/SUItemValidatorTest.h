// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUITEMVALIDATORTEST_H
#define SUITEMVALIDATORTEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUItemValidatorTest : NSObject <NSCopying>





+(id)defaultTest;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateItem:(id)arg0 offer:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateItems:(id)arg0 offers:(id)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif