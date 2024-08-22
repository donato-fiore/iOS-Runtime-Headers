// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDTARGETCONFIGURATION_H
#define HMDTARGETCONFIGURATION_H

@class HMFObject, NSArray, NSNumber, NSString, NSUUID;



@interface HMDTargetConfiguration : HMFObject

@property (retain, nonatomic) NSArray *buttonConfiguration; // ivar: _buttonConfiguration
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithAccessory:(id)arg0 buttonConfiguration:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(NSInteger)arg2 buttonConfiguration:(id)arg3 ;


@end


#endif