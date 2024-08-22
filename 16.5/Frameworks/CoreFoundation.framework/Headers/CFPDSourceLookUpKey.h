// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFPDSOURCELOOKUPKEY_H
#define CFPDSOURCELOOKUPKEY_H


#import <Foundation/Foundation.h>


@interface CFPDSourceLookUpKey : NSObject {
    *__CFString uncanonicalizedPath;
    *__CFString cloudPath;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif