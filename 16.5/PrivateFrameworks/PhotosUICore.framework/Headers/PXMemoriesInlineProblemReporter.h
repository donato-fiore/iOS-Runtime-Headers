// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESINLINEPROBLEMREPORTER_H
#define PXMEMORIESINLINEPROBLEMREPORTER_H

@class NSArray, PHMemory;

#import <Foundation/Foundation.h>


@interface PXMemoriesInlineProblemReporter : NSObject

@property (retain, nonatomic) NSArray *features; // ivar: _features
@property (retain, nonatomic) PHMemory *memory; // ivar: _memory


-(id)_disclaimerText;
-(id)_headerText;
-(id)_infoText;
-(id)_reportStringForFeatures;
-(id)feedbackMailViewController;
-(id)initWithMemory:(id)arg0 features:(id)arg1 ;


@end


#endif