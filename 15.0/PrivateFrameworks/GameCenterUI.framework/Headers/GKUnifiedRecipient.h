// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKUNIFIEDRECIPIENT_H
#define GKUNIFIEDRECIPIENT_H

@class CNContact, NSString;

#import <Foundation/Foundation.h>


@interface GKUnifiedRecipient : NSObject

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *nickName; // ivar: _nickName


+(id)recipientForContact:(id)arg0 ;
+(id)recipientForHandle:(id)arg0 ;
-(id)displayName;


@end


#endif