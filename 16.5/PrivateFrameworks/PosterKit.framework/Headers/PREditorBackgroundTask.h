// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITORBACKGROUNDTASK_H
#define PREDITORBACKGROUNDTASK_H

@class NSString;
@protocol BSDescriptionStreamable;

#import <Foundation/Foundation.h>


@interface PREditorBackgroundTask : NSObject <BSDescriptionStreamable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithReason:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)dealloc;


@end


#endif