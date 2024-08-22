// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPHOTOLIBRARYPERSON_H
#define HMDPHOTOLIBRARYPERSON_H

@class HMFObject, NSUUID, HMPerson, NSString;



@interface HMDPhotoLibraryPerson : HMFObject

@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) HMPerson *hmPerson;
@property (readonly, copy) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHMPerson:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 ;


@end


#endif