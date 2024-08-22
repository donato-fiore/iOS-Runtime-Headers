// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI22SAVINGSSTATEMENTSMODEL_H
#define _TTC9PASSKITUI22SAVINGSSTATEMENTSMODEL_H

@protocol PKAccountServiceObserver;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI22SavingsStatementsModel : NSObject <PKAccountServiceObserver>

 {
    ? _statements;
    ? _loading;
    ? accountService;
    ? accounts;
    ? statementIDToAccountID;
    ? exporter;
}




-(id)init;


@end


#endif