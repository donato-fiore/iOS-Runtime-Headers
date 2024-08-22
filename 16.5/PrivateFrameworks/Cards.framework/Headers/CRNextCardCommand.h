// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRNEXTCARDCOMMAND_H
#define CRNEXTCARDCOMMAND_H

@class NSString, NSDictionary;
@protocol CRPayloadCommand, CRCard, NSSecureCoding><NSCopying;


#import "CRBasicPayloadCommand.h"

@interface CRNextCardCommand : CRBasicPayloadCommand <CRPayloadCommand>



@property (nonatomic) NSUInteger commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CRCard> *nextCard; // ivar: _nextCard
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *payload;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif