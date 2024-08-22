// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBFETCHMETRICSIDENTIFIERACTION_H
#define AMSUIWEBFETCHMETRICSIDENTIFIERACTION_H

@class ACAccount, NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebFetchMetricsIdentifierAction : AMSUIWebAction

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *bagNamespace; // ivar: _bagNamespace
@property (retain, nonatomic) NSString *bagProfile; // ivar: _bagProfile
@property (retain, nonatomic) NSString *bagProfileVersion; // ivar: _bagProfileVersion
@property (nonatomic) BOOL crossDeviceSync; // ivar: _crossDeviceSync
@property (nonatomic) BOOL generateEventFields; // ivar: _generateEventFields
@property (retain, nonatomic) NSString *identifierKey; // ivar: _identifierKey


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif