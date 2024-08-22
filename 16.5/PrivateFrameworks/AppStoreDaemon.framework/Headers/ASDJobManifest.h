// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDJOBMANIFEST_H
#define ASDJOBMANIFEST_H

@class NSMutableArray, NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_activities;
}


@property (readonly, nonatomic) NSInteger manifestType; // ivar: _manifestType
@property (copy, nonatomic) NSNumber *purchaseID; // ivar: _purchaseID
@property (copy, nonatomic) NSString *storeCorrelationID; // ivar: _storeCorrelationID


+(BOOL)supportsSecureCoding;
-(NSUInteger)count;
-(id)addActivity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManifestType:(NSInteger)arg0 ;
-(void)addActivity:(id)arg0 withIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateActivitiesUsingBlock:(id)arg0 ;


@end


#endif