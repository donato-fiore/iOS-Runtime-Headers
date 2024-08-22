// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYCLOUDKITPROPERTIES_H
#define FAFAMILYCLOUDKITPROPERTIES_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, copy, nonatomic) NSString *participantID;
@property (readonly, copy, nonatomic) NSString *shareID;
@property (readonly, copy, nonatomic) NSString *zoneID;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif