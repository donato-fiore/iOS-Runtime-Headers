// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUURLTRACKERLOGCONTEXT_H
#define TSUURLTRACKERLOGCONTEXT_H

@class NSString;
@protocol TSULogContext;

#import <Foundation/Foundation.h>


@interface TSUURLTrackerLogContext : NSObject <TSULogContext>

 {
    NSString *_publicString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *privateString;
@property (readonly) NSString *publicString;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithURLTracker:(id)arg0 ;


@end


#endif