// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOAPPLICATION_H
#define MOAPPLICATION_H

@class NSString;
@protocol MOPersistable;

#import <Foundation/Foundation.h>


@interface MOApplication : NSObject <MOPersistable>



@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *persistableValue;
@property (readonly) Class superclass;


+(BOOL)isValidPersistableRepresentation:(id)arg0 ;
+(id)initializeWithPersistableValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;


@end


#endif