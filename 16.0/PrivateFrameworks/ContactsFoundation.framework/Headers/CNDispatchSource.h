// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDISPATCHSOURCE_H
#define CNDISPATCHSOURCE_H

@class NSString;
@protocol CNCancelable, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CNDispatchSource : NSObject <CNCancelable>

 {
    NSObject<OS_dispatch_source> *_source;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSource:(id)arg0 ;
-(id)source;
-(void)cancel;


@end


#endif