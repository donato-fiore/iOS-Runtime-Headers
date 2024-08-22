// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXEXTENSIONAVAILABLILITYOBSERVER_H
#define _EXEXTENSIONAVAILABLILITYOBSERVER_H

@class NSString, NSArray;
@protocol _EXActiveQueryObserver, _EXServiceClientObserver;

#import <Foundation/Foundation.h>


@interface _EXExtensionAvailablilityObserver : NSObject <_EXActiveQueryObserver, _EXServiceClientObserver>



@property (readonly) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *queries; // ivar: _queries
@property (readonly) Class superclass;


-(id)initWithObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)query:(id)arg0 resultDidUpdate:(id)arg1 ;
-(void)start;


@end


#endif