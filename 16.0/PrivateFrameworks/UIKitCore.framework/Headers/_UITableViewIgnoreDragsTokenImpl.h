// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITABLEVIEWIGNOREDRAGSTOKENIMPL_H
#define _UITABLEVIEWIGNOREDRAGSTOKENIMPL_H

@class NSString;
@protocol _UITableViewIgnoreDragsToken;

#import <Foundation/Foundation.h>


@interface _UITableViewIgnoreDragsTokenImpl : NSObject <_UITableViewIgnoreDragsToken>

 {
    id *_didEndHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDidEndHandler:(id)arg0 ;
-(void)dealloc;
-(void)endIgnoringDrags;


@end


#endif