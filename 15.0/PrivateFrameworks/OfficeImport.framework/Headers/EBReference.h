// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EBREFERENCE_H
#define EBREFERENCE_H


#import <Foundation/Foundation.h>


@interface EBReference : NSObject



+(id)edReferenceFromXlRef:(struct XlRef *)arg0 ;
+(struct XlRef *)xlRefFromEDReference:(id)arg0 ;


@end


#endif