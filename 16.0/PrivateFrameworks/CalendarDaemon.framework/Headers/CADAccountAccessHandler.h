// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADACCOUNTACCESSHANDLER_H
#define CADACCOUNTACCESSHANDLER_H

@protocol CADCalendarDatabaseDataProvider;

#import <Foundation/Foundation.h>


@interface CADAccountAccessHandler : NSObject

@property (readonly, nonatomic) NSObject<CADCalendarDatabaseDataProvider> *dataProvider; // ivar: _dataProvider


-(?)gatherRestrictedCalendarRowIDs:(?)arg0 forActioninDatabase;
-(?)restrictedCalendarRowIDsForActioninDatabase;
-(BOOL)isActionAllowed:(NSUInteger)arg0 forStore:(*void)arg1 inDatabase:(struct CalDatabase *)arg2 ;
-(id)initWithDatabaseDataProvider:(id)arg0 ;
-(void)reset;


@end


#endif