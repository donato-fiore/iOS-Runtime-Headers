// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETEVENTSTRINGVALIDATOR_H
#define PETEVENTSTRINGVALIDATOR_H


#import <Foundation/Foundation.h>


@interface PETEventStringValidator : NSObject



+(BOOL)dictionaryContainsValidStrings:(id)arg0 ;
+(BOOL)setContainsValidStrings:(id)arg0 ;
+(BOOL)stringIsValid:(id)arg0 ;
+(id)sanitizedDictionary:(id)arg0 ;
+(id)sanitizedSet:(id)arg0 ;
+(id)sanitizedString:(id)arg0 ;


@end


#endif