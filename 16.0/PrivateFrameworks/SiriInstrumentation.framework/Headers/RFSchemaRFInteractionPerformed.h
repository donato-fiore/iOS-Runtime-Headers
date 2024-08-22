// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RFSCHEMARFINTERACTIONPERFORMED_H
#define RFSCHEMARFINTERACTIONPERFORMED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RFSchemaRFInteractionPerformed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *actionName; // ivar: _actionName
@property (nonatomic) int commandType; // ivar: _commandType
@property (copy, nonatomic) NSString *componentIndex; // ivar: _componentIndex
@property (copy, nonatomic) NSString *componentName; // ivar: _componentName
@property (nonatomic) BOOL hasActionName; // ivar: _hasActionName
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) BOOL hasComponentIndex; // ivar: _hasComponentIndex
@property (nonatomic) BOOL hasComponentName; // ivar: _hasComponentName
@property (nonatomic) BOOL hasUserInteraction;
@property (nonatomic) BOOL hasVisualComponent;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int userInteraction; // ivar: _userInteraction
@property (nonatomic) int visualComponent; // ivar: _visualComponent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteActionName;
-(void)deleteCommandType;
-(void)deleteComponentIndex;
-(void)deleteComponentName;
-(void)deleteUserInteraction;
-(void)deleteVisualComponent;
-(void)writeTo:(id)arg0 ;


@end


#endif