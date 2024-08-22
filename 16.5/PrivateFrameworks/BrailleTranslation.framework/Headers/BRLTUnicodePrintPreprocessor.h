// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRLTUNICODEPRINTPREPROCESSOR_H
#define BRLTUNICODEPRINTPREPROCESSOR_H

@class NSString;
@protocol BRLTPrintPreprocessor;

#import <Foundation/Foundation.h>


@interface BRLTUnicodePrintPreprocessor : NSObject <BRLTPrintPreprocessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)preprocessPrintString:(id)arg0 withLocationMap:(*id)arg1 isEightDot:(BOOL)arg2 textFormattingRanges:(id)arg3 ;


@end


#endif