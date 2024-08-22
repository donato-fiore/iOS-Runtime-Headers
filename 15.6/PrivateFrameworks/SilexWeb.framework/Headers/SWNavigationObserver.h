// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWNAVIGATIONOBSERVER_H
#define SWNAVIGATIONOBSERVER_H

@class NSString;
@protocol SWNavigationObserver;

#import <Foundation/Foundation.h>


@interface SWNavigationObserver : NSObject <SWNavigationObserver>



@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBlock:(id)arg0 ;
-(void)handledNavigationWithURL:(id)arg0 ;


@end


#endif