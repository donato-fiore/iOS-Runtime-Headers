// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDACCESSRIGHT_H
#define FPDACCESSRIGHT_H


#import <Foundation/Foundation.h>

#import "FPDExtension.h"

@interface FPDAccessRight : NSObject {
    NSUInteger _accessLevel;
}


@property (readonly, nonatomic) NSUInteger level;
@property (readonly, weak, nonatomic) FPDExtension *provider; // ivar: _provider


-(id)init;
-(id)initWithURL:(id)arg0 connection:(id)arg1 manager:(id)arg2 ;
-(id)initWithURL:(id)arg0 entitlements:(id)arg1 connection:(id)arg2 manager:(id)arg3 ;
-(void)_computeAccessForURL:(id)arg0 entitlements:(id)arg1 connection:(id)arg2 ;


@end


#endif