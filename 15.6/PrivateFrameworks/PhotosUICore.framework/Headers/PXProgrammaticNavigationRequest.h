// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPROGRAMMATICNAVIGATIONREQUEST_H
#define PXPROGRAMMATICNAVIGATIONREQUEST_H


#import <Foundation/Foundation.h>

#import "PXProgrammaticNavigationDestination.h"

@interface PXProgrammaticNavigationRequest : NSObject

@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *destination; // ivar: _destination
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(id)description;
-(id)init;
-(id)initWithDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)cancel;


@end


#endif