// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLCOLUMN_H
#define NSSQLCOLUMN_H

@class NSString;


#import "NSSQLProperty.h"

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}




-(id)columnName;
-(id)description;
-(id)initForReadOnlyFetching;
-(id)initWithColumnName:(id)arg0 sqlType:(unsigned char)arg1 ;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(unsigned char)sqlType;
-(unsigned int)slot;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif