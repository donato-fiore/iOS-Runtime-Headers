// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSCHEMAUSOEDGE_H
#define USOSCHEMAUSOEDGE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOEdgeLabel.h"

@interface USOSchemaUSOEdge : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int fromIndex; // ivar: _fromIndex
@property (nonatomic) BOOL hasFromIndex;
@property (nonatomic) BOOL hasLabel; // ivar: _hasLabel
@property (nonatomic) BOOL hasToIndex;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOEdgeLabel *label; // ivar: _label
@property (nonatomic) unsigned int toIndex; // ivar: _toIndex


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif