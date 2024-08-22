// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTARGETBUTTONCONFIGURATION_H
#define HMDTARGETBUTTONCONFIGURATION_H

@class HMFObject, NSString;



@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)buttonName;
-(id)description;
-(id)init;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;
-(id)shortDescription;


@end


#endif