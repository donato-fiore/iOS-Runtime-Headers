// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOCATEGORY_H
#define MOCATEGORY_H

@class NSString;
@protocol MOPersistable;

#import <Foundation/Foundation.h>


@interface MOCategory : NSObject <MOPersistable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) id *persistableValue;
@property (readonly) Class superclass;


+(BOOL)isValidPersistableRepresentation:(id)arg0 ;
+(id)initializeWithPersistableValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif