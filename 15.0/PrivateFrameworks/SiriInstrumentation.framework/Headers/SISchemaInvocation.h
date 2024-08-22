// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAINVOCATION_H
#define SISCHEMAINVOCATION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaCarPlayInvocationContext.h"
#import "SISchemaVerticalLayoutCardSectionInvocationContext.h"
#import "SISchemaCardSectionKeyboardInvocationContext.h"
#import "SISchemaTVRemoteInvocationContext.h"
#import "SISchemaViewContainer.h"

@interface SISchemaInvocation : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaCarPlayInvocationContext *carPlayInvocationContext; // ivar: _carPlayInvocationContext
@property (retain, nonatomic) SISchemaVerticalLayoutCardSectionInvocationContext *cardInvocationContext; // ivar: _cardInvocationContext
@property (nonatomic) BOOL hasCarPlayInvocationContext; // ivar: _hasCarPlayInvocationContext
@property (nonatomic) BOOL hasCardInvocationContext; // ivar: _hasCardInvocationContext
@property (nonatomic) BOOL hasInvocationAction;
@property (nonatomic) BOOL hasInvocationSource;
@property (nonatomic) BOOL hasIsDeviceLocked;
@property (nonatomic) BOOL hasKeyboardInvocationContext; // ivar: _hasKeyboardInvocationContext
@property (nonatomic) BOOL hasTvRemoteInvocationContext; // ivar: _hasTvRemoteInvocationContext
@property (nonatomic) BOOL hasViewContainer; // ivar: _hasViewContainer
@property (nonatomic) int invocationAction; // ivar: _invocationAction
@property (nonatomic) int invocationSource; // ivar: _invocationSource
@property (nonatomic) BOOL isDeviceLocked; // ivar: _isDeviceLocked
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaCardSectionKeyboardInvocationContext *keyboardInvocationContext; // ivar: _keyboardInvocationContext
@property (retain, nonatomic) SISchemaTVRemoteInvocationContext *tvRemoteInvocationContext; // ivar: _tvRemoteInvocationContext
@property (retain, nonatomic) SISchemaViewContainer *viewContainer; // ivar: _viewContainer
@property (readonly, nonatomic) NSUInteger whichInvocationcontext; // ivar: _whichInvocationcontext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif