// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCXDELAYEDMEDIACONTEXT_H
#define OCXDELAYEDMEDIACONTEXT_H

@class NSURL, NSString;
@protocol OCDDelayedMediaContext;

#import <Foundation/Foundation.h>

#import "OCPPackage.h"

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext>

 {
    OCPPackage *mPackage;
    NSURL *mTargetLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadDelayedNode:(id)arg0 ;
-(BOOL)saveDelayedMedia:(id)arg0 toFile:(id)arg1 ;
-(id)dataRep;
-(id)initWithTargetLocation:(id)arg0 package:(id)arg1 ;


@end


#endif