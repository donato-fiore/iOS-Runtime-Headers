// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNAUTOCOMPLETEQUERYCACHEMISSOSLOGGING_H
#define _CNAUTOCOMPLETEQUERYCACHEMISSOSLOGGING_H

@class NSString;
@protocol CNAutocompleteQueryCacheMissLogging, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteQueryCacheMissOSLogging : NSObject <CNAutocompleteQueryCacheMissLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_os_log> *os_log; // ivar: _os_log
@property (readonly) Class superclass;


-(id)init;
-(void)didReturnCacheFalseNegatives:(id)arg0 ;
-(void)didReturnCacheFalsePositives:(id)arg0 ;


@end


#endif