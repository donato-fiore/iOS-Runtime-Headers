// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLINEWRAPPERV1_H
#define CRLINEWRAPPERV1_H

@protocol CRLineWrapping;

#import <Foundation/Foundation.h>


@interface CRLineWrapperV1 : NSObject <CRLineWrapping>





-(BOOL)_shouldInsertLineBreakForResult:(id)arg0 configuration:(id)arg1 context:(id)arg2 ;
-(NSUInteger)lineWrappingTypeForResult:(id)arg0 configuration:(id)arg1 strictConfiguration:(id)arg2 context:(id)arg3 ;
-(id)_allLineFeatures:(id)arg0 blockMapping:(*id)arg1 ;
-(void)computeLineWrappingForFeatures:(id)arg0 imageSize:(struct CGSize )arg1 ;


@end


#endif