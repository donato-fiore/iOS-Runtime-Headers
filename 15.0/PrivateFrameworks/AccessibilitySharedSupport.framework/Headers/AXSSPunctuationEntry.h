// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSPUNCTUATIONENTRY_H
#define AXSSPUNCTUATIONENTRY_H

@class NSString, NSDate, NSUUID, NSDictionary, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AXSSPunctuationEntry : NSObject <NSCopying>



@property (retain, nonatomic) NSString *ckChangeTag; // ivar: _ckChangeTag
@property (retain, nonatomic) NSDate *ckRecordProcessDate; // ivar: _ckRecordProcessDate
@property (retain, nonatomic) NSUUID *groupUUID; // ivar: _groupUUID
@property (nonatomic) BOOL inCloud; // ivar: _inCloud
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) NSData *jsonRepresentation;
@property (retain, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) NSString *punctuation; // ivar: _punctuation
@property (retain, nonatomic) NSString *replacement; // ivar: _replacement
@property (nonatomic) NSInteger rule; // ivar: _rule
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) unsigned short version; // ivar: _version


+(id)punctuationEntryFromJSONDictionary:(id)arg0 ;
+(id)punctuationEntryFromJSONRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif