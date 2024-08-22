// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWURLINTERACTION_H
#define SWURLINTERACTION_H

@class NSURL, NSString;
@protocol SWInteraction, SWNavigationManager;

#import <Foundation/Foundation.h>


@interface SWURLInteraction : NSObject <SWInteraction>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWNavigationManager> *navigationManager; // ivar: _navigationManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithURL:(id)arg0 navigationManager:(id)arg1 ;
-(void)perform;


@end


#endif