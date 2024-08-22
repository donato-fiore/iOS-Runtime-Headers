// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUUSERPARSE_H
#define SIRINLUUSERPARSE_H

@class NSUUID, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SIRINLUParser.h"
#import "SIRINLURepetitionResult.h"

@interface SIRINLUUserParse : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat comparableProbability; // ivar: _comparableProbability
@property (retain, nonatomic) NSUUID *nsUUID; // ivar: _nsUUID
@property (retain, nonatomic) SIRINLUParser *parser; // ivar: _parser
@property (retain, nonatomic) NSString *parserId; // ivar: _parserId
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (retain, nonatomic) SIRINLURepetitionResult *repetitionResult; // ivar: _repetitionResult
@property (retain, nonatomic) NSArray *userDialogActs; // ivar: _userDialogActs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 nsUUID:(id)arg2 parserId:(id)arg3 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 nsUUID:(id)arg2 parserId:(id)arg3 repetitionResult:(id)arg4 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 nsUUID:(id)arg2 parserId:(id)arg3 repetitionResult:(id)arg4 comparableProbability:(CGFloat)arg5 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 nsUUID:(id)arg2 parserId:(id)arg3 repetitionResult:(id)arg4 parser:(id)arg5 comparableProbability:(CGFloat)arg6 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 parserId:(id)arg2 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 parserId:(id)arg2 repetitionResult:(id)arg3 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 parserId:(id)arg2 repetitionResult:(id)arg3 parser:(id)arg4 ;
-(id)initWithUserDialogActs:(id)arg0 probability:(CGFloat)arg1 parserId:(id)arg2 repetitionResult:(id)arg3 parser:(id)arg4 comparableProbability:(CGFloat)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif