// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSANISETTESYNCTASK_H
#define AMSANISETTESYNCTASK_H

@class ACAccount, NSData;
@protocol AMSBagProtocol;


#import "AMSTask.h"

@interface AMSAnisetteSyncTask : AMSTask

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithData:(id)arg0 type:(NSInteger)arg1 account:(id)arg2 bag:(id)arg3 ;
-(id)performSync;


@end


#endif