// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAVERRORRESOLVERBLOCKHANDLER_H
#define MPAVERRORRESOLVERBLOCKHANDLER_H

@class NSString;
@protocol MPAVErrorResolverDelegate;

#import <Foundation/Foundation.h>

#import "MPAVErrorResolverBlockHandler.h"
#import "MPAVErrorResolver.h"

@interface MPAVErrorResolverBlockHandler : NSObject <MPAVErrorResolverDelegate>

 {
    MPAVErrorResolverBlockHandler *_strongSelf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPAVErrorResolver *errorResolver; // ivar: _errorResolver
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *resolutionHandler; // ivar: _resolutionHandler
@property (readonly) Class superclass;


-(id)initWithErrorResolver:(id)arg0 ;
-(void)errorResolver:(id)arg0 didResolveError:(id)arg1 withResolution:(NSInteger)arg2 ;
-(void)resolveError:(id)arg0 ;


@end


#endif