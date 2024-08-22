// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSCOPILOTFUSEDCONTROLLER_H
#define GCSCOPILOTFUSEDCONTROLLER_H

@class NSString, NSDate;
@protocol NSSecureCoding, GCSJSONSerializable, GCSJSONObject;

#import <Foundation/Foundation.h>


@interface GCSCopilotFusedController : NSObject <NSSecureCoding, GCSJSONSerializable>



@property (readonly, copy, nonatomic) NSString *copilotIdentifier; // ivar: _copilotIdentifier
@property (readonly, copy, nonatomic) NSString *fusedControllerIdentifier; // ivar: _fusedControllerIdentifier
@property (readonly, nonatomic) NSObject<GCSJSONObject> *jsonObject;
@property (readonly, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (readonly, copy, nonatomic) NSString *pilotIdentifier; // ivar: _pilotIdentifier


+(BOOL)supportsSecureCoding;
+(id)archivalClasses;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFusedControllerIdentifier:(id)arg0 pilotIdentifier:(id)arg1 copilotIdentifier:(id)arg2 ;
-(id)initWithJSONObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif