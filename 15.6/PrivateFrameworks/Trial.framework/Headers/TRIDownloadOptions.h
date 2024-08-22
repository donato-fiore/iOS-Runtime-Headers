// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIDOWNLOADOPTIONS_H
#define TRIDOWNLOADOPTIONS_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface TRIDownloadOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (nonatomic) BOOL allowsBatteryUsage; // ivar: _allowsBatteryUsage
@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (nonatomic) NSUInteger discretionaryBehavior; // ivar: _discretionaryBehavior
@property (readonly, nonatomic) NSUInteger requiredCapability;


+(BOOL)supportsSecureCoding;
+(id)inexpensiveOptions;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initFromPersistedBehavior:(id)arg0 ;
-(id)initWithAllowsCellular:(BOOL)arg0 discretionaryBehavior:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)serializeToPersistedBehavior;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif