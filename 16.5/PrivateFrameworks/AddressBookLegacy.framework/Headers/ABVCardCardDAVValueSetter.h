// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABVCARDCARDDAVVALUESETTER_H
#define ABVCARDCARDDAVVALUESETTER_H



#import "ABVCardPersonValueSetter.h"

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {
    BOOL _importingToExistingGroup;
}


@property BOOL recordIsGroup; // ivar: _recordIsGroup


+(int)groupPropertyForPersonProperty:(int)arg0 ;
+(struct __CFDictionary *)_personToGroupPropertyMap;
-(*void)copyParsedRecordWithSource:(*void)arg0 outRecordType:(*unsigned int)arg1 ;
-(*void)valueForProperty:(unsigned int)arg0 ;
-(BOOL)propertyIsValidForPerson:(unsigned int)arg0 ;
-(BOOL)setImageData:(id)arg0 cropRectX:(int)arg1 cropRectY:(int)arg2 cropRectWidth:(int)arg3 cropRectHeight:(int)arg4 ;
-(BOOL)setValue:(*void)arg0 forProperty:(unsigned int)arg1 ;
-(id)imageData;
-(id)initWithGroup:(*void)arg0 removeExistingProperties:(BOOL)arg1 ;
-(id)initWithPerson:(*void)arg0 removeExistingProperties:(BOOL)arg1 ;
-(void)_drainExistingProperties;


@end


#endif