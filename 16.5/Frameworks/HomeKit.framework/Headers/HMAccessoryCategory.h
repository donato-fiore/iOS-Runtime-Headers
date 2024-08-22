// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYCATEGORY_H
#define HMACCESSORYCATEGORY_H

@class NSString;
@protocol HMFDumpState, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMAccessoryCategory : NSObject <HMFDumpState, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *categoryType; // ivar: _categoryType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isTelevisionAccessoryCategory;
@property (readonly) BOOL isWiFiRouterAccessoryCategory;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dumpState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 name:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif