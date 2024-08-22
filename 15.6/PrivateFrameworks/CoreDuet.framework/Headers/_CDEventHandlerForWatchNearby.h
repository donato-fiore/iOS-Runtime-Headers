// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDEVENTHANDLERFORWATCHNEARBY_H
#define _CDEVENTHANDLERFORWATCHNEARBY_H

@class NSString;
@protocol _CDEventHandlerDelegate;

#import <Foundation/Foundation.h>

#import "_CDDataCollectionAnonymizer.h"
#import "_CDFileUtility.h"

@interface _CDEventHandlerForWatchNearby : NSObject <_CDEventHandlerDelegate>



@property (retain, nonatomic) _CDDataCollectionAnonymizer *anonymizer; // ivar: _anonymizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _CDFileUtility *utility; // ivar: _utility


-(id)init;
-(void)eventHandler:(id)arg0 withFileHandle:(id)arg1 ;


@end


#endif