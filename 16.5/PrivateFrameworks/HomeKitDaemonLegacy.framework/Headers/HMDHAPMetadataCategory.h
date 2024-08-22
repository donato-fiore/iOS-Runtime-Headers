// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPMETADATACATEGORY_H
#define HMDHAPMETADATACATEGORY_H

@class HMFObject, NSString, NSNumber;



@interface HMDHAPMetadataCategory : HMFObject

@property (retain, nonatomic) NSString *catDescription; // ivar: _catDescription
@property (retain, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *uuidStr; // ivar: _uuidStr


-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 uuid:(id)arg1 name:(id)arg2 description:(id)arg3 ;


@end


#endif