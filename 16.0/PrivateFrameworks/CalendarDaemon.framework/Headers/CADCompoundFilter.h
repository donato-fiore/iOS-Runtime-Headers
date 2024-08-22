// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADCOMPOUNDFILTER_H
#define CADCOMPOUNDFILTER_H

@class NSArray;


#import "CADFilter.h"

@interface CADCompoundFilter : CADFilter

@property (readonly, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly, nonatomic) NSInteger operation; // ivar: _operation


+(BOOL)supportsSecureCoding;
-(BOOL)applicableToEntityType:(int)arg0 ;
-(BOOL)validate;
-(id)extendWhereClause:(id)arg0 usingOperation:(NSInteger)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilters:(id)arg0 operation:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif