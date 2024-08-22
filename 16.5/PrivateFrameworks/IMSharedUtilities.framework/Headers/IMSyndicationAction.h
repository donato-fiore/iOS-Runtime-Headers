// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSYNDICATIONACTION_H
#define IMSYNDICATIONACTION_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;

#import <Foundation/Foundation.h>


@interface IMSyndicationAction : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (readonly, copy, nonatomic) NSString *chatGUID; // ivar: _chatGUID
@property (readonly, nonatomic) unsigned char syndicatedItemType;
@property (readonly, nonatomic) unsigned char syndicationActionType; // ivar: _syndicationActionType
@property (readonly, nonatomic) NSDate *syndicationStartDate; // ivar: _syndicationStartDate
@property (readonly, nonatomic) unsigned char version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)dateFromNanoSeconds:(id)arg0 ;
+(id)nanoSecondsFromDate:(id)arg0 ;
+(id)unarchiveClasses;
-(BOOL)isEqual:(id)arg0 ;
-(id)_stringFromActionType:(unsigned char)arg0 ;
-(id)_stringFromItemType:(unsigned char)arg0 ;
-(id)copyDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 syndicationActionType:(unsigned char)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIMRemoteObjectSerializedDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg0 ;


@end


#endif