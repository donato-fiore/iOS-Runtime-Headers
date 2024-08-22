// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTMMSREGISTRATIONFAILUREINFOTYPE_H
#define CTMMSREGISTRATIONFAILUREINFOTYPE_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL activationForMms; // ivar: _activationForMms
@property (nonatomic) BOOL dataActive; // ivar: _dataActive
@property (nonatomic) BOOL isDataAttached; // ivar: _isDataAttached
@property (retain, nonatomic) NSNumber *pdpContextId; // ivar: _pdpContextId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCTMmsRegistrationFailureInfoType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif