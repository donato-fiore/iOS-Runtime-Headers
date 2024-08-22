// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMTABLESCHEMA_H
#define BMTABLESCHEMA_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMTableSchema : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *columnNames; // ivar: _columnNames


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColumnNames:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif