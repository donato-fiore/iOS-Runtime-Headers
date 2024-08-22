// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGREALTIMECONTACT_H
#define SGREALTIMECONTACT_H

@class NSString;
@protocol NSSecureCoding, NSCopying, SGRealtimeSuggestion;

#import <Foundation/Foundation.h>

#import "SGContact.h"
#import "SGExtractionInfo.h"

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>



@property (readonly, nonatomic) NSString *cnContactIdentifier; // ivar: _cnContactIdentifier
@property (readonly, nonatomic) SGContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo; // ivar: _extractionInfo
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHarvested; // ivar: _isHarvested
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) int updatedFields; // ivar: _updatedFields


+(BOOL)supportsSecureCoding;
+(id)realtimeContactForFields:(id)arg0 updatedFields:(int)arg1 addedToCuratedContact:(id)arg2 ;
+(id)realtimeContactForNewContact:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRealtimeContact:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(int)arg0 updatedFields:(int)arg1 contact:(id)arg2 identifier:(id)arg3 ;
-(id)markedAsHarvested;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif