// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNLOCALIZATION_H
#define CNLOCALIZATION_H


#import <Foundation/Foundation.h>


@interface CNLocalization : NSObject



+(id)localizedStringForInteger:(NSInteger)arg0 ;
// +(id)localizedStringForString:(id)arg0 bundle:(id)arg1 table:(id)arg2 lookupBlock:(id)arg3 returningNilIfNotFound:(unk)arg4  ;
+(id)localizedStringForString:(id)arg0 bundle:(id)arg1 table:(id)arg2 returningNilIfNotFound:(BOOL)arg3 ;
// +(id)localizedStringForString:(id)arg0 class:(Class)arg1 lookupBlock:(id)arg2 returningNilIfNotFound:(unk)arg3  ;
+(id)localizedStringForString:(id)arg0 class:(Class)arg1 returningNilIfNotFound:(BOOL)arg2 ;


@end


#endif