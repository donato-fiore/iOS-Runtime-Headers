// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBIOMESTREAMVALIDATOR_H
#define ATXBIOMESTREAMVALIDATOR_H


#import <Foundation/Foundation.h>


@interface ATXBiomeStreamValidator : NSObject



-(int)validateChronologicalWithStreamIdentifier:(id)arg0 activity:(id)arg1 config:(id)arg2 ;
-(void)validateChronologicalPrivateStreamWithStreamIdentifier:(id)arg0 activity:(id)arg1 ;
-(void)validateChronologicalPublicStreamWithStreamIdentifier:(id)arg0 activity:(id)arg1 ;


@end


#endif