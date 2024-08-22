// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLPLUGIN_H
#define PFLPLUGIN_H

@class NSString;
@protocol MLRTaskPerforming;

#import <Foundation/Foundation.h>


@interface PFLPlugin : NSObject <MLRTaskPerforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)performTask:(id)arg0 outError:(*id)arg1 ;
-(void)stop;


@end


#endif