// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCSCKKSSYNCVIEWOPERATION_H
#define PCSCKKSSYNCVIEWOPERATION_H

@class CKKSControl, NSString;


#import "PCSCKKSOperation.h"
#import "PCSCKKSItemModifyContext.h"

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (retain) CKKSControl *CKKSControl; // ivar: _CKKSControl
@property (readonly) PCSCKKSItemModifyContext *context; // ivar: _context
@property (retain) NSString *view; // ivar: _view


-(BOOL)ensureControl;
-(id)initWithItemModifyContext:(id)arg0 ;
-(void)checkTLKStatus;
-(void)start;
-(void)syncView;


@end


#endif