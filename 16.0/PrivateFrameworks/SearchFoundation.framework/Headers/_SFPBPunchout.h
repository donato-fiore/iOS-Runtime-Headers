// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBPUNCHOUT_H
#define _SFPBPUNCHOUT_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBPunchout, NSSecureCoding;


#import "_SFPBUserActivityData.h"

@interface _SFPBPunchout : PBCodable <_SFPBPunchout, NSSecureCoding>



@property (copy, nonatomic) NSString *actionTarget; // ivar: _actionTarget
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasClip; // ivar: _hasClip
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunnableInBackground; // ivar: _isRunnableInBackground
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urls; // ivar: _urls
@property (retain, nonatomic) _SFPBUserActivityData *userActivityData; // ivar: _userActivityData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)urlsAtIndex:(NSUInteger)arg0 ;
-(void)addUrls:(id)arg0 ;
-(void)clearUrls;
-(void)writeTo:(id)arg0 ;


@end


#endif