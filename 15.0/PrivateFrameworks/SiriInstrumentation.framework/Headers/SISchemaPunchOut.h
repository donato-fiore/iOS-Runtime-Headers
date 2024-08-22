// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAPUNCHOUT_H
#define SISCHEMAPUNCHOUT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaViewContainer.h"

@interface SISchemaPunchOut : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (nonatomic) BOOL hasAppID; // ivar: _hasAppID
@property (nonatomic) BOOL hasPunchOutUI;
@property (nonatomic) BOOL hasUrlScheme; // ivar: _hasUrlScheme
@property (nonatomic) BOOL hasViewContainer; // ivar: _hasViewContainer
@property (nonatomic) BOOL hasViewElementID; // ivar: _hasViewElementID
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int punchOutUI; // ivar: _punchOutUI
@property (copy, nonatomic) NSString *urlScheme; // ivar: _urlScheme
@property (retain, nonatomic) SISchemaViewContainer *viewContainer; // ivar: _viewContainer
@property (copy, nonatomic) NSData *viewElementID; // ivar: _viewElementID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif