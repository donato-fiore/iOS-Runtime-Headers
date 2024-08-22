// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUPARSER_H
#define SIRINLUPARSER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLUParser : NSObject <NSSecureCoding>



@property (nonatomic) int algorithmType; // ivar: _algorithmType
@property (nonatomic) int parserIdentifier; // ivar: _parserIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithAlgorithmType:(int)arg0 parserIdentifier:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif