// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECSERVERMESSAGE_H
#define ECSERVERMESSAGE_H

@class NSNumber, NSSet, NSString;
@protocol ECServerMessageBuilder, ECIMAPServerMessageBuilder, NSCopying;

#import <Foundation/Foundation.h>

#import "ECMessageFlags.h"

@interface ECServerMessage : NSObject <ECServerMessageBuilder, ECIMAPServerMessageBuilder, NSCopying>

 {
    NSNumber *_imapUID;
}


@property (readonly, nonatomic) unsigned int imapUID;
@property (copy, nonatomic) NSSet *labels; // ivar: _labels
@property (retain, nonatomic) NSString *messagePersistentID; // ivar: _messagePersistentID
@property (retain, nonatomic) NSString *persistentID; // ivar: _persistentID
@property (copy, nonatomic) NSString *remoteID; // ivar: _remoteID
@property (readonly, nonatomic) id *remoteIDObject;
@property (retain, nonatomic) ECMessageFlags *serverFlags; // ivar: _serverFlags


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIMAPServerMessageBuilder:(id)arg0 ;
-(id)initWithServerMessageBuilder:(id)arg0 ;


@end


#endif