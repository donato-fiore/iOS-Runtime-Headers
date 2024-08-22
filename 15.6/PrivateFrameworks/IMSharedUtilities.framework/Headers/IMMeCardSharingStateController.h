// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMECARDSHARINGSTATECONTROLLER_H
#define IMMECARDSHARINGSTATECONTROLLER_H


#import <Foundation/Foundation.h>


@interface IMMeCardSharingStateController : NSObject

@property (nonatomic) BOOL imageForkedFromMeCard;
@property (nonatomic) BOOL nameForkedFromMeCard;
@property (nonatomic) NSUInteger nameFormat;
@property (nonatomic) NSUInteger sharingAudience;
@property (nonatomic) BOOL sharingEnabled;


+(id)sharedInstance;
-(BOOL)wasSharingEverEnabled;
-(id)init;
-(void)_incrementSharingVersion;
-(void)_migrateMeCardDomains;
-(void)_syncPreferenceDidChange;
-(void)postNameFormatChangedNotification;


@end


#endif