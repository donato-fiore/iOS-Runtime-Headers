// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSERVEROBJECTDATABASEMEDIAAPIIMPORTCHILDRELATION_H
#define MPSERVEROBJECTDATABASEMEDIAAPIIMPORTCHILDRELATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MPIdentifierSet.h"

@interface MPServerObjectDatabaseMediaAPIImportChildRelation : NSObject

@property (nonatomic) NSString *childKey; // ivar: _childKey
@property (copy, nonatomic) MPIdentifierSet *identifiers; // ivar: _identifiers
@property (copy, nonatomic) MPIdentifierSet *parentIdentifiers; // ivar: _parentIdentifiers
@property (nonatomic) NSInteger relativeOrder; // ivar: _relativeOrder


-(id)initWithItemIdentifiers:(id)arg0 parentIdentifiers:(id)arg1 childKey:(id)arg2 relativeOrder:(NSInteger)arg3 ;


@end


#endif