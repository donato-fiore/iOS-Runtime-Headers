// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNNANOFORMATTEDSTRINGFORMATTER_H
#define MNNANOFORMATTEDSTRINGFORMATTER_H

@class NSString;
@protocol GEOServerFormattedStepStringFormatter;

#import <Foundation/Foundation.h>


@interface MNNanoFormattedStringFormatter : NSObject <GEOServerFormattedStepStringFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedFormatter;
-(id)listInstructionForStep:(id)arg0 ;
-(id)signInstructionsForStep:(id)arg0 ;


@end


#endif