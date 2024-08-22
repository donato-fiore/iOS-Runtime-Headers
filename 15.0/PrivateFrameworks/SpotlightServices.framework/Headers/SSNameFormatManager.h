// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSNAMEFORMATMANAGER_H
#define SSNAMEFORMATMANAGER_H

@class NSPersonNameComponentsFormatter;

#import <Foundation/Foundation.h>


@interface SSNameFormatManager : NSObject

@property (retain) NSPersonNameComponentsFormatter *personNameComponentsFormatter; // ivar: _personNameComponentsFormatter


+(id)personNameComponentsFromString:(id)arg0 ;
+(void)initialize;
-(id)init;


@end


#endif