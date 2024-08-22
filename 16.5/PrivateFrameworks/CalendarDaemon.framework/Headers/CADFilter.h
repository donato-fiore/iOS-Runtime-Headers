// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADFILTER_H
#define CADFILTER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADFilter : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)applicableToEntityType:(int)arg0 ;
-(BOOL)validate;
-(id)extendWhereClause:(id)arg0 usingOperation:(NSInteger)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif