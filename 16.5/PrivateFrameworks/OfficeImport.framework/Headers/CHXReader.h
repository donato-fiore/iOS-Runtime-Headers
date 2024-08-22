// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHXREADER_H
#define CHXREADER_H


#import <Foundation/Foundation.h>


@interface CHXReader : NSObject



+(?)chartPartWithParentNodedrawingState;
+(?)readFromParentNodedrawingState;
+(?)readFromXmlDocument:(?)arg0 chartStyleIddrawingState;
+(id)externalDataRelationshipWithChartPart:(id)arg0 drawingState:(id)arg1 ;
+(id)externalDataWithChartPart:(id)arg0 relationship:(id)arg1 ;


@end


#endif