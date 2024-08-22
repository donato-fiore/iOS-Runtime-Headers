// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFHOMEANNOUNCEMENT_H
#define AFHOMEANNOUNCEMENT_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFHomeAnnouncement : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *finishedDate; // ivar: _finishedDate
@property (readonly, nonatomic) NSUInteger finishedHostTime; // ivar: _finishedHostTime
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *startedDate; // ivar: _startedDate
@property (readonly, nonatomic) NSUInteger startedHostTime; // ivar: _startedHostTime
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 startedHostTime:(NSUInteger)arg1 finishedHostTime:(NSUInteger)arg2 startedDate:(id)arg3 finishedDate:(id)arg4 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif