// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTCONVERSATION_H
#define RTTCONVERSATION_H

@class TUCall, NSString, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTTConversation : NSObject <NSSecureCoding>



@property (retain, nonatomic) TUCall *call; // ivar: _call
@property (retain, nonatomic) NSString *callIdentifier; // ivar: _callIdentifier
@property (retain, nonatomic) NSMutableArray *utterances; // ivar: _utterances


+(BOOL)supportsSecureCoding;
+(id)conversationWithCall:(id)arg0 ;
+(id)conversationWithID:(id)arg0 andUtterances:(id)arg1 ;
+(void)conversationWithCall:(id)arg0 withCallback:(id)arg1 ;
+(void)conversationWithCallUID:(id)arg0 withCallback:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversation:(id)arg0 ;
-(NSUInteger)utteranceCountForMe:(BOOL)arg0 ;
-(id)appendCharacter:(unsigned short)arg0 ;
-(id)appendStringFromOtherContactPath:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)lastUtteranceForMe:(BOOL)arg0 ;
-(id)mergeUtterancesIfPossible;
-(id)otherContactPath;
-(id)processBackspaceForMe:(BOOL)arg0 ;
-(void)addUtterance:(id)arg0 ;
-(void)cleanup;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif