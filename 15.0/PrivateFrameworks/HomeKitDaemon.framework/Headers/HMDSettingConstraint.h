// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSETTINGCONSTRAINT_H
#define HMDSETTINGCONSTRAINT_H

@class NSData, NSString, NSUUID, NSNumber;
@protocol HMDSettingBaseProtocol;

#import <Foundation/Foundation.h>


@interface HMDSettingConstraint : NSObject <HMDSettingBaseProtocol>



@property (readonly) NSData *dataValue; // ivar: _dataValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *name;
@property (readonly) NSNumber *numberValue; // ivar: _numberValue
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *type; // ivar: _type
@property (readonly, copy) id *value;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 type:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif