// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASENATURALSTATEMENT_H
#define ML3DATABASENATURALSTATEMENT_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *parameters; // ivar: _parameters
@property (copy, nonatomic) NSString *sql; // ivar: _sql


+(BOOL)supportsSecureCoding;
+(id)naturalStatementWithSQL:(id)arg0 parameters:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSQL:(id)arg0 parameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setParameter:(id)arg0 forPosition:(NSUInteger)arg1 ;


@end


#endif