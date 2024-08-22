// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BROWSERNIDELEGATE_H
#define BROWSERNIDELEGATE_H

@class NSString;
@protocol NISessionDelegate;

#import <Foundation/Foundation.h>


@interface BrowserNIDelegate : NSObject <NISessionDelegate>

 {
    *OpaqueFigCFWeakReferenceHolder _browserWeak;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBrowser:(struct OpaqueAPBrowser *)arg0 ;
-(void)dealloc;
-(void)session:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)session:(id)arg0 didRemoveNearbyObjects:(id)arg1 withReason:(NSInteger)arg2 ;
-(void)session:(id)arg0 didUpdateNearbyObjects:(id)arg1 ;


@end


#endif