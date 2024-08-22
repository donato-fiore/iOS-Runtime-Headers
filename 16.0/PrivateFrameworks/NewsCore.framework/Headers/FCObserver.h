// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCOBSERVER_H
#define FCOBSERVER_H

@class NSString;
@protocol FCDisposable;

#import <Foundation/Foundation.h>


@interface FCObserver : NSObject <FCDisposable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) id *keepAliveObject; // ivar: _keepAliveObject
@property (copy, nonatomic) id *observerBlock; // ivar: _observerBlock
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithToken:(NSUInteger)arg0 ;
-(void)dispose;
-(void)disposeOn:(id)arg0 ;


@end


#endif