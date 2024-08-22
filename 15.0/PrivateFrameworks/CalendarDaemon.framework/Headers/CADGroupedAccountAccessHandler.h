// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADGROUPEDACCOUNTACCESSHANDLER_H
#define CADGROUPEDACCOUNTACCESSHANDLER_H

@class NSMutableArray;
@protocol CADAccountAccessHandler;

#import <Foundation/Foundation.h>


@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler>



@property (readonly, nonatomic) NSMutableArray *accessHandlers; // ivar: _accessHandlers


-(BOOL)isAccountManaged:(id)arg0 ;
-(BOOL)isActionAllowed:(NSUInteger)arg0 forAccountIdentifier:(id)arg1 ;
-(id)init;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 ;
-(void)addAccountAccessHandler:(id)arg0 ;
-(void)reset;


@end


#endif