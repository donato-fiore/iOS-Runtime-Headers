// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCDAFBOOST_H
#define SCDAFBOOST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCDAFBoost : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat boostValue; // ivar: _boostValue
@property (nonatomic) CGFloat currentDecay; // ivar: _currentDecay
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (nonatomic) CGFloat totalDecay; // ivar: _totalDecay
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)arrayDictionaryRepresentation:(id)arg0 ;
+(id)boostsArrayWithDictionaryRepresentation:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif