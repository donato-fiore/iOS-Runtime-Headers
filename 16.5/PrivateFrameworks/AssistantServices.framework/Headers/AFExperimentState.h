// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFEXPERIMENTSTATE_H
#define AFEXPERIMENTSTATE_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFExperimentState : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didEnd; // ivar: _didEnd
@property (readonly, copy, nonatomic) NSString *endingGroupIdentifier; // ivar: _endingGroupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithLastSyncDate:(id)arg0 didEnd:(BOOL)arg1 endingGroupIdentifier:(id)arg2 version:(id)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif