// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPUTILITIES_H
#define UPUTILITIES_H


#import <Foundation/Foundation.h>


@interface UPUtilities : NSObject



+(BOOL)checkFileExistence:(id)arg0 error:(*id)arg1 ;
+(id)higherLevelEntityLabelFromParentLabel:(id)arg0 childLabel:(id)arg1 ;
+(id)intermediateNodeRepresentations:(id)arg0 ;
+(id)rootNodeRepresentationForIntent:(id)arg0 andEntities:(id)arg1 ;
+(id)stdU16ToNSString:(*void)arg0 ;
+(struct _NSRange )rangeFromStart:(NSUInteger)arg0 end:(NSUInteger)arg1 ;
+(struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> )nSStringToU16String:(id)arg0 ;


@end


#endif