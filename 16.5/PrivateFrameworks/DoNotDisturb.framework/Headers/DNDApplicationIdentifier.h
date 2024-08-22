// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDAPPLICATIONIDENTIFIER_H
#define DNDAPPLICATIONIDENTIFIER_H

@class NSString;
@protocol DNDEventSourceIdentifying;

#import <Foundation/Foundation.h>


@interface DNDApplicationIdentifier : NSObject <DNDEventSourceIdentifying>



@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger platform; // ivar: _platform
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffDescription;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 platform:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif