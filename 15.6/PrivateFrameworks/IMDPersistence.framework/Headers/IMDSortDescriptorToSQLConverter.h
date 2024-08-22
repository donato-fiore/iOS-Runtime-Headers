// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDSORTDESCRIPTORTOSQLCONVERTER_H
#define IMDSORTDESCRIPTORTOSQLCONVERTER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IMDSortDescriptorToSQLConverter : NSObject

@property (readonly, copy, nonatomic) NSString *expression; // ivar: _expression
@property (readonly, copy, nonatomic) NSDictionary *keyPathsToColumns; // ivar: _keyPathsToColumns


-(id)_columnWithSortDescriptor:(id)arg0 ;
-(id)_orderByClauseWithSortDescriptor:(id)arg0 ;
-(id)init;
-(id)initWithSortDescriptor:(id)arg0 keyPathsToColumns:(id)arg1 ;


@end


#endif