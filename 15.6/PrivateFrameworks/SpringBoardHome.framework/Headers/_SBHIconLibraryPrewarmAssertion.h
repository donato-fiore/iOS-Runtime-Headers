// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBHICONLIBRARYPREWARMASSERTION_H
#define _SBHICONLIBRARYPREWARMASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHIconLibraryTableViewController.h"

@interface _SBHIconLibraryPrewarmAssertion : NSObject <BSInvalidatable>

 {
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBHIconLibraryTableViewController *iconLibraryTableViewController; // ivar: _iconLibraryTableViewController
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithReason:(id)arg0 iconLibraryTableViewController:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif