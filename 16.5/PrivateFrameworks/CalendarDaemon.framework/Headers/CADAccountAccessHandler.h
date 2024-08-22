// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADACCOUNTACCESSHANDLER_H
#define CADACCOUNTACCESSHANDLER_H

@protocol CADCalendarDatabaseDataProvider;

#import <Foundation/Foundation.h>


@interface CADAccountAccessHandler : NSObject

@property (readonly, nonatomic) NSObject<CADCalendarDatabaseDataProvider> *dataProvider; // ivar: _dataProvider


-(?)gatherRestrictedCalendarRowIDs:(?)arg0 forActioninDatabase;
-(?)isActionAllowed:(?)arg0 forStoreinDatabase;
-(id)initWithDatabaseDataProvider:(id)arg0 ;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 inDatabase:(struct CalDatabase *)arg1 ;
-(void)reset;


@end


#endif