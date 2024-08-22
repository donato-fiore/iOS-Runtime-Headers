// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDFETCHCONTROLLER_H
#define EDFETCHCONTROLLER_H

@class NSString;
@protocol EFLoggable, EDAccountsProvider;

#import <Foundation/Foundation.h>


@interface EDFetchController : NSObject <EFLoggable>



@property (retain, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)initWithAccountsProvider:(id)arg0 ;


@end


#endif