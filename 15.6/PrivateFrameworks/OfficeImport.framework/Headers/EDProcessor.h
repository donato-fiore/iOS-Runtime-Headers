// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPROCESSOR_H
#define EDPROCESSOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "EDWorkbook.h"
#import "EDResources.h"

@interface EDProcessor : NSObject {
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    NSMutableArray *mObjects;
}




-(BOOL)isObjectSupported:(id)arg0 ;
-(id)initWithWorkbook:(id)arg0 ;
-(void)applyProcessorToObject:(id)arg0 sheet:(id)arg1 ;
-(void)applyProcessorWithSheet:(id)arg0 ;
-(void)markObjectForPostProcessing:(id)arg0 ;


@end


#endif