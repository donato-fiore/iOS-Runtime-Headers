// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSCHATSUGGESTWRAPPER_H
#define BCSCHATSUGGESTWRAPPER_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "BCSChatSuggestMessage.h"

@interface BCSChatSuggestWrapper : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasModTime;
@property (readonly, nonatomic) BOOL hasPhone;
@property (retain, nonatomic) BCSChatSuggestMessage *message; // ivar: _message
@property (nonatomic) NSInteger modTime; // ivar: _modTime
@property (retain, nonatomic) NSString *phone; // ivar: _phone


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif