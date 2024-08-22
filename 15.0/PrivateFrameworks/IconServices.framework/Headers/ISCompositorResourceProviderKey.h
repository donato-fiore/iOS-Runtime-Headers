// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISCOMPOSITORRESOURCEPROVIDERKEY_H
#define ISCOMPOSITORRESOURCEPROVIDERKEY_H

@class NSString;
@protocol ISCompositorResource;

#import <Foundation/Foundation.h>


@interface ISCompositorResourceProviderKey : NSObject <ISCompositorResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (retain) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)resourceKeyWithName:(id)arg0 flags:(NSUInteger)arg1 ;


@end


#endif