// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNCHARTFORMULAARGUMENTENUMERATOR_H
#define TNCHARTFORMULAARGUMENTENUMERATOR_H

@class NSEnumerator;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TNChartFormulaArgumentEnumerator : NSObject <NSFastEnumeration>

 {
    NSEnumerator *_underlyingEnumerator;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithEnumerator:(id)arg0 ;
-(id)nextElement;
-(id)nextObject;


@end


#endif