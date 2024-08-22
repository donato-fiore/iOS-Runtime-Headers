// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCCONTROLLERDESCRIPTION_H
#define _GCCONTROLLERDESCRIPTION_H

@class NSArray, NSString;
@protocol _GCUpdatableIPCObjectDescription, NSCopying><NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"

@interface _GCControllerDescription : NSObject <_GCUpdatableIPCObjectDescription>

 {
    NSArray *_componentDescriptions;
    GCController *_materializedController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying><NSObject><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDescription:(id)arg0 ;
-(BOOL)update:(id)arg0 withContext:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 components:(id)arg1 ;
-(id)materializeWithContext:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif