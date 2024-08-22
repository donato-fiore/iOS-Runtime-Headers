// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSTOMBSTONE_H
#define GCSTOMBSTONE_H

@class NSDate, NSString;
@protocol NSSecureCoding, GCSJSONSerializable, GCSJSONObject;

#import <Foundation/Foundation.h>


@interface GCSTombstone : NSObject <NSSecureCoding, GCSJSONSerializable>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<GCSJSONObject> *jsonObject;
@property (readonly, nonatomic) NSInteger recordType; // ivar: _recordType


+(BOOL)supportsSecureCoding;
+(CGFloat)timeToLiveSeconds;
+(id)archivalClasses;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 creationDate:(id)arg1 recordType:(NSInteger)arg2 ;
-(id)initWithJSONObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif