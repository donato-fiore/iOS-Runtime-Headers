// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABVCARDCARDDAVPARSER_H
#define ABVCARDCARDDAVPARSER_H

@class NSMutableDictionary, NSData;


#import "ABVCardParser.h"

@interface ABVCardCardDAVParser : ABVCardParser {
    NSMutableDictionary *_unknownAttributes;
    BOOL _removeExistingProperties;
}


@property (readonly, retain) NSData *lastCropRectChecksum; // ivar: _lastCropRectChecksum
@property (readonly) int lastCropRectHeight; // ivar: _lastCropRectHeight
@property (readonly) int lastCropRectWidth; // ivar: _lastCropRectWidth
@property (readonly) int lastCropRectX; // ivar: _lastCropRectX
@property (readonly) int lastCropRectY; // ivar: _lastCropRectY
@property (readonly) BOOL localRecordHasAdditionalProperties; // ivar: _localRecordHasAdditionalProperties


-(*void)createRecordInSource:(*void)arg0 outRecordType:(*unsigned int)arg1 ;
-(BOOL)_handleUnknownTag:(id)arg0 withValue:(id)arg1 ;
-(BOOL)importToGroup:(*void)arg0 removeExistingProperties:(BOOL)arg1 ;
-(BOOL)importToPerson:(*void)arg0 removeExistingProperties:(BOOL)arg1 ;
-(BOOL)parseUID;
-(id)defaultADRLabel;
-(id)defaultLabel;
-(id)defaultURLLabel;
-(id)genericLabel;
-(id)initWithData:(id)arg0 watchdogTimer:(id)arg1 ;
-(void)cleanUpCardState;
-(void)dealloc;
-(void)noteLackOfValueForImageData;
-(void)noteLackOfValueForProperty:(unsigned int)arg0 ;


@end


#endif