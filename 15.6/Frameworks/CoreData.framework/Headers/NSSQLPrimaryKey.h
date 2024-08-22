// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLPRIMARYKEY_H
#define NSSQLPRIMARYKEY_H

@class NSString;


#import "NSSQLColumn.h"

@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString *_name;
}




-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(id)name;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif