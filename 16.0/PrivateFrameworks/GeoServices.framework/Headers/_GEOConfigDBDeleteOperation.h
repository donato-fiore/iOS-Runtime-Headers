// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOCONFIGDBDELETEOPERATION_H
#define _GEOCONFIGDBDELETEOPERATION_H

@class GEOConfigDBOperationBase, NSString;
@protocol _GEOConfigDBOperation;


#import "_GEOConfigDB.h"

@interface _GEOConfigDBDeleteOperation : GEOConfigDBOperationBase <_GEOConfigDBOperation>

 {
    _GEOConfigDB *_configDB;
    NSInteger _rowId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performOperation;
-(id)init:(id)arg0 rowId:(NSInteger)arg1 ;


@end


#endif