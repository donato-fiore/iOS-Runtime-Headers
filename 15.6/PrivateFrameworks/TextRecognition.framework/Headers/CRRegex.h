// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRREGEX_H
#define CRREGEX_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CRRegex : NSObject

@property (retain, nonatomic) NSArray *supportedRegularExpressions; // ivar: _supportedRegularExpressions


-(BOOL)stringMatchesRegex:(id)arg0 ;
-(id)init;


@end


#endif