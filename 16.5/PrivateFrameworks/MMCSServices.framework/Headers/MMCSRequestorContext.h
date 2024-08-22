// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MMCSREQUESTORCONTEXT_H
#define MMCSREQUESTORCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MMCSController.h"

@interface MMCSRequestorContext : NSObject

@property (readonly, retain) MMCSController *controller; // ivar: _controller
@property (readonly, retain) NSString *transferID; // ivar: _transferID


-(id)initWithController:(id)arg0 transferID:(id)arg1 ;
-(void)dealloc;
-(void)removeFromController;


@end


#endif