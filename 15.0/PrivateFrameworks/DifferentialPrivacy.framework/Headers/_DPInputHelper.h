// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPINPUTHELPER_H
#define _DPINPUTHELPER_H

@class NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface _DPInputHelper : NSObject

@property (readonly, nonatomic) NSNumberFormatter *fmt; // ivar: _fmt


-(id)init;
-(id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)arg0 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg0 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg0 encoding:(NSUInteger)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg0 separatedBy:(id)arg1 encoding:(NSUInteger)arg2 ;
-(id)numberFromString:(id)arg0 ;
-(id)numbersFromFileAtPath:(id)arg0 ;


@end


#endif