// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSTEXTREPLACEMENTENTRY_H
#define _KSTEXTREPLACEMENTENTRY_H

@class NSData, NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_KSTextReplacementEntry.h"

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSData *cloudData; // ivar: _cloudData
@property (copy, nonatomic) NSString *cloudID; // ivar: _cloudID
@property BOOL needsSaveToCloud; // ivar: _needsSaveToCloud
@property (copy, nonatomic) NSString *phrase; // ivar: _phrase
@property (retain, nonatomic) _KSTextReplacementEntry *priorValue; // ivar: _priorValue
@property (copy, nonatomic) NSString *shortcut; // ivar: _shortcut
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property BOOL wasDeleted; // ivar: _wasDeleted


+(BOOL)supportsSecureCoding;
+(id)localEntryFromCloudEntry:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encryptedFields;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)unEncryptedFields;
-(id)uniqueID;
-(id)uniqueRecordName;
-(id)uniqueRecordNameVer0;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif