// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMUKEEPLOCALALERTACTION_H
#define NMUKEEPLOCALALERTACTION_H

@class NMSKeepLocalRequestOptions, NSString;

#import <Foundation/Foundation.h>


@interface NMUKeepLocalAlertAction : NSObject

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) NMSKeepLocalRequestOptions *keepLocalRequestOptions; // ivar: _keepLocalRequestOptions
@property (nonatomic) BOOL shouldPerformKeepLocalRequest; // ivar: _shouldPerformKeepLocalRequest
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)actionWithTitle:(id)arg0 actionHandler:(id)arg1 ;
+(id)actionWithTitle:(id)arg0 shouldPerformKeepLocalRequest:(BOOL)arg1 keepLocalRequestOptions:(id)arg2 ;


@end


#endif