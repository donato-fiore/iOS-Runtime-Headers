// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKNICKNAMEUPDATE_H
#define CKNICKNAMEUPDATE_H

@class CNContact, IMHandle, IMNickname;

#import <Foundation/Foundation.h>


@interface CKNicknameUpdate : NSObject

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) IMHandle *handle; // ivar: _handle
@property (retain, nonatomic) IMNickname *nickname; // ivar: _nickname
@property (nonatomic) NSUInteger updateType; // ivar: _updateType


-(BOOL)isEqual:(id)arg0 ;
-(id)_updatedName;
-(id)description;
-(id)listSubtitleText;
-(id)listTitleText;


@end


#endif