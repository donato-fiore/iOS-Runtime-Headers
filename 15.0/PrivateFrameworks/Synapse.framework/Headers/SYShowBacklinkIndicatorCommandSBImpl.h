// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYSHOWBACKLINKINDICATORCOMMANDSBIMPL_H
#define SYSHOWBACKLINKINDICATORCOMMANDSBIMPL_H

@class SBSSystemNotesPresentationHandle, NSString;
@protocol SBSSystemNotesPresentationHandleObserver, SYShowBacklinkIndicatorCommandImpl;

#import <Foundation/Foundation.h>


@interface SYShowBacklinkIndicatorCommandSBImpl : NSObject <SBSSystemNotesPresentationHandleObserver, SYShowBacklinkIndicatorCommandImpl>



@property (retain, nonatomic) SBSSystemNotesPresentationHandle *_handle; // ivar: __handle
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDomainIdentifiers:(id)arg0 linkIdentifiers:(id)arg1 ;
-(void)invalidate;
-(void)runWithCompletion:(id)arg0 ;
-(void)systemNotesPresentationHandle:(id)arg0 didChangePresentationMode:(NSInteger)arg1 ;


@end


#endif