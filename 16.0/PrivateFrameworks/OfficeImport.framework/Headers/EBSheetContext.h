// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EBSHEETCONTEXT_H
#define EBSHEETCONTEXT_H

@class NSString;
@protocol OCDDelayedNodeContext;

#import <Foundation/Foundation.h>

#import "EBReaderSheetState.h"

@interface EBSheetContext : NSObject <OCDDelayedNodeContext>

 {
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadDelayedNode:(id)arg0 ;
-(id)initWithSheetIndex:(unsigned int)arg0 state:(id)arg1 ;


@end


#endif