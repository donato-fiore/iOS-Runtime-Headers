// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPROCESSORS_H
#define EDPROCESSORS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "EDWorkbook.h"

@interface EDProcessors : NSObject {
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}




-(BOOL)hasProcessors;
-(id)initWithWorkbook:(id)arg0 ;
-(void)addProcessorClass:(Class)arg0 ;
-(void)applyProcessorsWithSheet:(id)arg0 ;
-(void)markObject:(id)arg0 processor:(Class)arg1 ;
-(void)removeAllObjects;
-(void)removeProcessorClass:(Class)arg0 ;


@end


#endif