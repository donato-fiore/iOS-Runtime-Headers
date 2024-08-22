// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVREMOTEACTION_H
#define TVREMOTEACTION_H

@class NSString;
@protocol TVRemoteItem;

#import <Foundation/Foundation.h>


@interface TVRemoteAction : NSObject <TVRemoteItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger icon; // ivar: _icon
@property (copy, nonatomic) NSString *remoteItemTitle; // ivar: _remoteItemTitle
@property (readonly) Class superclass;


+(id)actionWithTitle:(id)arg0 icon:(NSInteger)arg1 handler:(id)arg2 ;
-(BOOL)isRemoteItemCollection;
-(NSInteger)remoteItemIcon;
-(id)_init;
-(void)handleRemoteAction;


@end


#endif