// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASECOMMAND_H
#define CKVDATABASECOMMAND_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVDatabaseCommand : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *commandString; // ivar: _commandString
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCommand:(id)arg0 ;
-(BOOL)updateCommandString:(id)arg0 ;
-(BOOL)updateParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCommandString:(id)arg0 parameters:(id)arg1 ;
-(void)replaceParameters:(id)arg0 ;


@end


#endif