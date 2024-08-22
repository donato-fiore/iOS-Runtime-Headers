// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMYRIADSESSION_H
#define AFMYRIADSESSION_H

@class NSData, NSUUID, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFMyriadSession : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *currentElectionAdvertisementData; // ivar: _currentElectionAdvertisementData
@property (readonly, copy, nonatomic) NSUUID *currentElectionAdvertisementId; // ivar: _currentElectionAdvertisementId
@property (readonly, copy, nonatomic) NSDictionary *electionAdvertisementDataByIds; // ivar: _electionAdvertisementDataByIds
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly, copy, nonatomic) NSUUID *sessionId; // ivar: _sessionId


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeneration:(NSUInteger)arg0 sessionId:(id)arg1 currentElectionAdvertisementId:(id)arg2 currentElectionAdvertisementData:(id)arg3 electionAdvertisementDataByIds:(id)arg4 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif