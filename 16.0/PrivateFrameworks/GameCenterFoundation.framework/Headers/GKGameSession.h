// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKGAMESESSION_H
#define GKGAMESESSION_H

@class NSArray, NSString, NSDate, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKCloudPlayer.h"

@interface GKGameSession : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *badgedPlayers;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property (retain, nonatomic) GKCloudPlayer *lastModifiedPlayer; // ivar: _lastModifiedPlayer
@property (nonatomic) NSInteger maxNumberOfConnectedPlayers;
@property (nonatomic) NSInteger maxNumberOfConnectedPlayers; // ivar: _maxNumberOfConnectedPlayers
@property (retain, nonatomic) GKCloudPlayer *owner;
@property (retain, nonatomic) GKCloudPlayer *owner; // ivar: _owner
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (retain, nonatomic) NSMutableDictionary *playerStates; // ivar: _playerStates
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSArray *players; // ivar: _players
@property (retain, nonatomic) NSString *serverChangeTag;
@property (retain, nonatomic) NSString *serverChangeTag; // ivar: _serverChangeTag
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)gk_sessionEventListeners;
+(void)addEventListener:(id)arg0 ;
+(void)createSessionInContainer:(id)arg0 withTitle:(id)arg1 maxConnectedPlayers:(NSInteger)arg2 completionHandler:(id)arg3 ;
+(void)getSessionsForZone:(id)arg0 completionHandler:(id)arg1 ;
+(void)getZonesWithCompletionHandler:(id)arg0 ;
+(void)loadSessionWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadSessionsInContainer:(id)arg0 completionHandler:(id)arg1 ;
+(void)postSession:(id)arg0 didAddPlayer:(id)arg1 ;
+(void)postSession:(id)arg0 didReceiveData:(id)arg1 fromPlayer:(id)arg2 ;
+(void)postSession:(id)arg0 didReceiveMessage:(id)arg1 withData:(id)arg2 fromPlayer:(id)arg3 ;
+(void)postSession:(id)arg0 didRemovePlayer:(id)arg1 ;
+(void)postSession:(id)arg0 player:(id)arg1 didChangeConnectionState:(NSInteger)arg2 ;
+(void)postSession:(id)arg0 player:(id)arg1 didSaveData:(id)arg2 ;
+(void)removeEventListener:(id)arg0 ;
+(void)removeSessionWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)description;
-(id)descriptionSubstitutionMap;
-(id)initWithCoder:(id)arg0 ;
-(id)playersWithConnectionState:(NSInteger)arg0 ;
-(void)clearBadgeForPlayers:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getShareURLWithCompletionHandler:(id)arg0 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)saveData:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendData:(id)arg0 withTransportType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)sendMessageWithLocalizedFormatKey:(id)arg0 arguments:(id)arg1 data:(id)arg2 toPlayers:(id)arg3 badgePlayers:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)setConnectionState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateWithSession:(id)arg0 ;


@end


#endif