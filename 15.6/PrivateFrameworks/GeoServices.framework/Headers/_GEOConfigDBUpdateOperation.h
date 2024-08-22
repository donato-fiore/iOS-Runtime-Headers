// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOCONFIGDBUPDATEOPERATION_H
#define _GEOCONFIGDBUPDATEOPERATION_H

@class GEOConfigDBOperationBase, NSString;
@protocol _GEOConfigDBOperation;


#import "_GEOConfigDB.h"

@interface _GEOConfigDBUpdateOperation : GEOConfigDBOperationBase <_GEOConfigDBOperation>

 {
    _GEOConfigDB *_configDB;
    NSInteger _rowId;
    NSString *_type;
    NSString *_value;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performOperation;
-(id)init:(id)arg0 rowId:(NSInteger)arg1 type:(id)arg2 value:(id)arg3 ;


@end


#endif