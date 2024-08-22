// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPBRUNACTIONEVENT_H
#define WFPBRUNACTIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBRunActionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) NSString *automationType; // ivar: _automationType
@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL didRunRemotely; // ivar: _didRunRemotely
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL hasDidRunRemotely;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasRunSource;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *runSource; // ivar: _runSource
@property (retain, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource


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