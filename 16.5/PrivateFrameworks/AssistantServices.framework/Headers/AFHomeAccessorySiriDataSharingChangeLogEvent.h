// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFHOMEACCESSORYSIRIDATASHARINGCHANGELOGEVENT_H
#define AFHOMEACCESSORYSIRIDATASHARINGCHANGELOGEVENT_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFHomeAccessorySiriDataSharingChangeLogEvent : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy, nonatomic) NSString *changeReason; // ivar: _changeReason
@property (readonly, nonatomic) NSInteger changeSource; // ivar: _changeSource
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *logEventIdentifier; // ivar: _logEventIdentifier
@property (readonly, nonatomic) NSInteger newOptInStatus; // ivar: _newOptInStatus
@property (readonly, nonatomic) NSInteger previousOptInStatus; // ivar: _previousOptInStatus
@property (readonly, copy, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (readonly, copy, nonatomic) NSString *schemaVersion; // ivar: _schemaVersion
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 previousOptInStatus:(NSInteger)arg1 newOptInStatus:(NSInteger)arg2 changeSource:(NSInteger)arg3 changeReason:(id)arg4 buildVersion:(id)arg5 productVersion:(id)arg6 schemaVersion:(id)arg7 logEventIdentifier:(id)arg8 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif