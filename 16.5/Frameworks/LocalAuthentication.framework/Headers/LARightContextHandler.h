// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LARIGHTCONTEXTHANDLER_H
#define LARIGHTCONTEXTHANDLER_H

@class NSString;
@protocol LAContextObserver, LARightContextHandlerDelegate;

#import <Foundation/Foundation.h>

#import "LAContext.h"

@interface LARightContextHandler : NSObject <LAContextObserver>



@property (retain, nonatomic) LAContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LARightContextHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)contextDidBecomeInvalid:(id)arg0 ;


@end


#endif