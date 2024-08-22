// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCONFIGDBUPDATEEXPIREOPERATION_H
#define _GEOCONFIGDBUPDATEEXPIREOPERATION_H

@class GEOConfigDBOperationBase, NSString;
@protocol _GEOConfigDBOperation;


#import "GEOSQLiteDB.h"
#import "GEOConfigExpiringKey.h"

@interface _GEOConfigDBUpdateExpireOperation : GEOConfigDBOperationBase <_GEOConfigDBOperation>

 {
    GEOSQLiteDB *_db;
    GEOConfigExpiringKey *_expire;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performOperation;
-(id)init:(id)arg0 expire:(id)arg1 ;


@end


#endif