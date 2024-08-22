// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKSMARTCARDTOKEN_H
#define TKSMARTCARDTOKEN_H

@class NSData;


#import "TKToken.h"
#import "TKSmartCard.h"

@interface TKSmartCardToken : TKToken

@property (readonly) NSData *AID; // ivar: _AID
@property (retain, nonatomic) id *keepAlive; // ivar: _keepAlive
@property (readonly, nonatomic) TKSmartCard *smartCard; // ivar: _smartCard


-(id)initWithSmartCard:(id)arg0 AID:(id)arg1 instanceID:(id)arg2 tokenDriver:(id)arg3 ;


@end


#endif