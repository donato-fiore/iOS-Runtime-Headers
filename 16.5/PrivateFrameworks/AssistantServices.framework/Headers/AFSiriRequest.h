// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRIREQUEST_H
#define AFSIRIREQUEST_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSiriRequest : NSObject <NSSecureCoding>

 {
    NSUUID *_identifier;
}


@property (copy, nonatomic, setter=_setOriginatingAceID:) NSString *_originatingAceID; // ivar: _originatingAceID
@property (copy, nonatomic, setter=_setRefId:) NSString *_refId; // ivar: __refId
@property (copy, nonatomic, setter=_setTurnId:) NSUUID *_turnId; // ivar: _turnId


+(BOOL)supportsSecureCoding;
-(BOOL)_makeAppFrontmost;
-(id)_af_analyticsContextDescription;
-(id)_descriptionWithProperties:(id)arg0 ;
-(id)_identifier;
-(id)_initWithOriginatingAceID:(id)arg0 ;
-(id)_initWithOriginatingAceID:(id)arg0 identifier:(id)arg1 turnId:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)requestName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif