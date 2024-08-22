// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCOWNERIDENTIFIER_H
#define HDCLOUDSYNCOWNERIDENTIFIER_H

@class NSString, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying>

 {
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}


@property (readonly, nonatomic) NSString *cloudKitIdentifier;
@property (readonly, nonatomic) NSString *string;


+(id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg0 deviceIdentifier:(id)arg1 ownerDifferentiator:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDatabaseIdentifer:(id)arg0 deviceIdentifier:(id)arg1 ownerDifferentiator:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif