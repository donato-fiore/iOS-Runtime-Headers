// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTACTION_H
#define ASTACTION_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASTAction : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *action; // ivar: _action
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (nonatomic) BOOL generatedId; // ivar: _generatedId
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (nonatomic) NSUInteger progress; // ivar: _progress
@property (nonatomic) NSInteger resultCode; // ivar: _resultCode
@property (retain, nonatomic) NSDictionary *results; // ivar: _results


+(BOOL)supportsSecureCoding;
-(id)acceptableDecoderClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAction:(id)arg0 data:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif