// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLISTMEDIADATABASESHOW_H
#define VUIPLISTMEDIADATABASESHOW_H

@class NSArray;
@protocol NSCopying;


#import "VUIPlistMediaDatabaseEntity.h"

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying>



@property (retain, nonatomic) NSArray *seasons; // ivar: _seasons


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(id)isLocal;
-(id)seasonForIdentifier:(id)arg0 ;


@end


#endif