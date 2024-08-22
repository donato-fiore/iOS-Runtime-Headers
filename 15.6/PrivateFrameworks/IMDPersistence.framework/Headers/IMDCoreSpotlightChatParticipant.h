// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDCORESPOTLIGHTCHATPARTICIPANT_H
#define IMDCORESPOTLIGHTCHATPARTICIPANT_H

@class CNContact, NSString;

#import <Foundation/Foundation.h>


@interface IMDCoreSpotlightChatParticipant : NSObject

@property (readonly, retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) NSString *handleID; // ivar: _handleID
@property (readonly, nonatomic) BOOL isSender; // ivar: _isSender


-(id)initWithHandleID:(id)arg0 contact:(id)arg1 isSender:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif