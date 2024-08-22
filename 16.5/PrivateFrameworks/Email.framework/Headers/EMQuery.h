// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMQUERY_H
#define EMQUERY_H

@class EFQuery, CSSuggestion;



@interface EMQuery : EFQuery

@property (copy, nonatomic) CSSuggestion *suggestion; // ivar: _suggestion


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToQuery:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetClass:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 suggestion:(id)arg3 limit:(NSInteger)arg4 queryOptions:(NSUInteger)arg5 label:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif