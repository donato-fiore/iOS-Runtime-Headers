// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASETAPINTERFACEIMPL_H
#define PHASETAPINTERFACEIMPL_H

@class NSString;
@protocol PHASETapInterface;

#import <Foundation/Foundation.h>

#import "PHASETapRegistry.h"

@interface PHASETapInterfaceImpl : NSObject <PHASETapInterface>

 {
    PHASETapRegistry *_tapRegistry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) PHASETapRegistry *tapRegistry;


+(id)new;
-(id)init;
-(id)initWithTapRegistry:(id)arg0 ;


@end


#endif