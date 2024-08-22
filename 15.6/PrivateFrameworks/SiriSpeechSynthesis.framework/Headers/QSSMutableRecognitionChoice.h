// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLERECOGNITIONCHOICE_H
#define QSSMUTABLERECOGNITIONCHOICE_H

@class NSArray;


#import "QSSRecognitionChoice.h"

@interface QSSMutableRecognitionChoice : QSSRecognitionChoice

@property (copy, nonatomic) NSArray *alternative_index;
@property (nonatomic) int confidence;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif