// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDCONTACTRESOLVER_H
#define _CDCONTACTRESOLVER_H


#import <Foundation/Foundation.h>


@interface _CDContactResolver : NSObject



+(id)normalizedStringFromContactString:(id)arg0 ;
+(id)resolveContact:(id)arg0 usingStore:(id)arg1 ;
+(id)resolveContactIdentifier:(id)arg0 usingStore:(id)arg1 ;
+(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg0 ;
+(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg0 usingStore:(id)arg1 ;


@end


#endif