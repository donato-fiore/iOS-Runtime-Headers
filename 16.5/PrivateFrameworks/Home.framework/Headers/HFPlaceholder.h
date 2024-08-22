// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPLACEHOLDER_H
#define HFPLACEHOLDER_H

@class NSString, NSUUID;
@protocol HFHomeKitObject;

#import <Foundation/Foundation.h>


@interface HFPlaceholder : NSObject <HFHomeKitObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)init;


@end


#endif