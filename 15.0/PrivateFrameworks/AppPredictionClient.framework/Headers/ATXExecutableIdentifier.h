// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXEXECUTABLEIDENTIFIER_H
#define ATXEXECUTABLEIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>


@interface ATXExecutableIdentifier : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *debugTitle;
@property (readonly, nonatomic) NSObject<ATXSuggestionExecutableProtocol> *object; // ivar: _object
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeroAppPrediction:(id)arg0 ;
-(id)initWithInfoSuggestion:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif