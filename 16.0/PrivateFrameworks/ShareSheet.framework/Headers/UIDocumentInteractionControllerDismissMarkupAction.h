// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDOCUMENTINTERACTIONCONTROLLERDISMISSMARKUPACTION_H
#define UIDOCUMENTINTERACTIONCONTROLLERDISMISSMARKUPACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)actionWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)initWithTitle:(id)arg0 handler:(id)arg1 ;


@end


#endif