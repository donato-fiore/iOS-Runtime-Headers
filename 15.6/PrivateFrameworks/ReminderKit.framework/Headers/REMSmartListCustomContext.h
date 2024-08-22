// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSMARTLISTCUSTOMCONTEXT_H
#define REMSMARTLISTCUSTOMCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "REMAccount.h"
#import "REMListBadge.h"
#import "REMColor.h"
#import "REMList.h"
#import "REMSmartList.h"

@interface REMSmartListCustomContext : NSObject

@property (readonly, nonatomic) REMAccount *account; // ivar: _account
@property (readonly, nonatomic) REMListBadge *badge;
@property (readonly, nonatomic) REMColor *color;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMList *parentList; // ivar: _parentList
@property (retain, nonatomic) REMSmartList *smartlist; // ivar: _smartlist


-(id)initWithSmartList:(id)arg0 account:(id)arg1 parentList:(id)arg2 ;


@end


#endif