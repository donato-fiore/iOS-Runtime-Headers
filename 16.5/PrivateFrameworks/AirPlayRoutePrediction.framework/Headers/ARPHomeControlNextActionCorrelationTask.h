// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPHOMECONTROLNEXTACTIONCORRELATIONTASK_H
#define ARPHOMECONTROLNEXTACTIONCORRELATIONTASK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ARPHomeControlSuggester.h"
#import "ARPHomeControlCorrelationUtilities.h"

@interface ARPHomeControlNextActionCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file; // ivar: _file
@property (retain, nonatomic) ARPHomeControlSuggester *suggester; // ivar: _suggester
@property (retain, nonatomic) ARPHomeControlCorrelationUtilities *utilities; // ivar: _utilities


-(id)initWithCorrelationsFile:(id)arg0 ;
-(void)execute;


@end


#endif