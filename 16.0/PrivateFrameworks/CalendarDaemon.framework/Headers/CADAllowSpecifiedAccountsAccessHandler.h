// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADALLOWSPECIFIEDACCOUNTSACCESSHANDLER_H
#define CADALLOWSPECIFIEDACCOUNTSACCESSHANDLER_H

@class NSSet;


#import "CADAccountAccessHandler.h"

@interface CADAllowSpecifiedAccountsAccessHandler : CADAccountAccessHandler {
    NSSet *_restrictedCalendarRowIDs;
}


@property (readonly, nonatomic) NSSet *allowedSourceIdentifiers; // ivar: _allowedSourceIdentifiers


-(?)isActionAllowed:(?)arg0 forStoreinDatabase;
-(id)initWithAllowedSourceIdentifiers:(id)arg0 databaseDataProvider:(id)arg1 ;


@end


#endif