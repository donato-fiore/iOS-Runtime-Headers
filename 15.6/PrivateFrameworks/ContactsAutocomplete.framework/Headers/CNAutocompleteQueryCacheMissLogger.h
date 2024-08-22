// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETEQUERYCACHEMISSLOGGER_H
#define CNAUTOCOMPLETEQUERYCACHEMISSLOGGER_H

@class NSString, NSArray;
@protocol CNAutocompleteQueryCacheMissLogging;

#import <Foundation/Foundation.h>


@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSArray *loggers; // ivar: _loggers
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLoggers:(id)arg0 ;
-(void)didReturnCacheFalseNegatives:(id)arg0 ;
-(void)didReturnCacheFalsePositives:(id)arg0 ;


@end


#endif