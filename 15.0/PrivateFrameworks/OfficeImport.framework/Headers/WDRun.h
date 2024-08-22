// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDRUN_H
#define WDRUN_H


#import <Foundation/Foundation.h>

#import "WDParagraph.h"

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph; // ivar: mParagraph


-(BOOL)isEmpty;
-(id)description;
-(id)init;
-(id)initWithParagraph:(id)arg0 ;
-(int)runType;
-(void)clearProperties;


@end


#endif