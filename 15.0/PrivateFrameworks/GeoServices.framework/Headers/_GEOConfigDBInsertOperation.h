// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCONFIGDBINSERTOPERATION_H
#define _GEOCONFIGDBINSERTOPERATION_H

@class GEOConfigDBOperationBase, NSString;
@protocol _GEOConfigDBOperation;


#import "_GEOConfigDB.h"

@interface _GEOConfigDBInsertOperation : GEOConfigDBOperationBase <_GEOConfigDBOperation>

 {
    _GEOConfigDB *_configDB;
    NSInteger _rowId;
    NSString *_type;
    NSString *_key;
    NSString *_value;
    NSInteger _parentId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performOperation;
-(id)init:(id)arg0 rowId:(NSInteger)arg1 type:(id)arg2 key:(id)arg3 value:(id)arg4 parentId:(NSInteger)arg5 ;


@end


#endif