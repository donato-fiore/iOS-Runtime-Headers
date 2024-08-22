// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPENCRYPTIONKEYMATERIAL_H
#define IDSGROUPENCRYPTIONKEYMATERIAL_H

@class NSMutableSet, NSDate, NSString, NSUUID, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSGroupEncryptionKeyMaterial : NSObject <NSCopying>

 {
    NSMutableSet *_devicesToBeSent;
}


@property (readonly, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (nonatomic) unsigned int generationCounter; // ivar: _generationCounter
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (nonatomic) BOOL isGeneratedLocally; // ivar: _isGeneratedLocally
@property (nonatomic) BOOL isSentToClient; // ivar: _isSentToClient
@property (readonly, nonatomic) NSUUID *keyIndex; // ivar: _keyIndex
@property (readonly, nonatomic) NSData *keyMaterial; // ivar: _keyMaterial
@property (readonly, nonatomic) NSData *keySalt; // ivar: _keySalt
@property (nonatomic) NSUInteger participantID; // ivar: _participantID


+(id)keyOriginIdentifier;
+(unsigned int)locallyGeneratedKeysCounter;
+(void)setLocallyGeneratedKeysCounter:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRealTimeEncryptionKeyMaterial:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIndex:(id)arg0 groupID:(id)arg1 participantID:(NSUInteger)arg2 ;
-(id)initWithKeyMaterial:(id)arg0 keySalt:(id)arg1 keyIndex:(id)arg2 groupID:(id)arg3 ;
-(id)initWithKeyMaterial:(id)arg0 keySalt:(id)arg1 keyIndex:(id)arg2 groupID:(id)arg3 generationCounter:(unsigned int)arg4 participantID:(NSUInteger)arg5 ;
-(id)initWithKeyMaterial:(id)arg0 keySalt:(id)arg1 keyIndex:(id)arg2 groupID:(id)arg3 isGeneratedLocally:(BOOL)arg4 createdAt:(id)arg5 generationCounter:(unsigned int)arg6 participantID:(NSUInteger)arg7 ;
-(id)initWithKeyMaterial:(id)arg0 keySalt:(id)arg1 keyIndex:(id)arg2 groupID:(id)arg3 participantID:(NSUInteger)arg4 ;
-(void)changeCreatedAt:(id)arg0 ;
-(void)removeDeviceFromSentToDevice:(id)arg0 ;
-(void)sentToDevice:(id)arg0 ;


@end


#endif