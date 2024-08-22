// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FKADDRESSBOOK_H
#define FKADDRESSBOOK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FKAddressBook : NSObject

@property (nonatomic) *void addressBook; // ivar: _addressBook
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // ivar: _operationQueue


+(id)sharedInstance;
+(void)performBlock:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif