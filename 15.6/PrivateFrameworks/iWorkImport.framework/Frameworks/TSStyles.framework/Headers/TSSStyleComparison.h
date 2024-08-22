// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSSTYLECOMPARISON_H
#define TSSSTYLECOMPARISON_H


#import <Foundation/Foundation.h>

#import "TSSStyle.h"

@interface TSSStyleComparison : NSObject {
    TSSStyle *_first;
    TSSStyle *_second;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithStyle:(id)arg0 andStyle:(id)arg1 ;


@end


#endif