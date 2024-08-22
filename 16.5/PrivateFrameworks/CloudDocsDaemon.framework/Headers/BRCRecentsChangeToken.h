// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCRECENTSCHANGETOKEN_H
#define BRCRECENTSCHANGETOKEN_H


#import <Foundation/Foundation.h>


@interface BRCRecentsChangeToken : NSObject

@property (nonatomic) NSUInteger databaseID; // ivar: _databaseID
@property (nonatomic) NSUInteger notifRank; // ivar: _notifRank


+(BOOL)supportsSecureCoding;
+(id)changeTokenFromData:(id)arg0 ;
-(id)description;
-(id)toData;


@end


#endif