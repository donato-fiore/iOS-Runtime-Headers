// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLATTRIBUTE_H
#define NSSQLATTRIBUTE_H



#import "NSSQLColumn.h"

@interface NSSQLAttribute : NSSQLColumn



-(BOOL)isFileBackedFuture;
-(id)attributeDescription;
-(id)initForReadOnlyFetchWithExpression:(id)arg0 ;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(void)dealloc;


@end


#endif