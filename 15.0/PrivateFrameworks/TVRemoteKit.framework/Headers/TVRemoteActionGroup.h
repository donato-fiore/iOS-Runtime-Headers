// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVREMOTEACTIONGROUP_H
#define TVREMOTEACTIONGROUP_H

@class NSString, NSArray;
@protocol TVRemoteItem;

#import <Foundation/Foundation.h>


@interface TVRemoteActionGroup : NSObject <TVRemoteItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger icon; // ivar: _icon
@property (copy, nonatomic) NSString *remoteItemTitle; // ivar: _remoteItemTitle
@property (retain, nonatomic) NSArray *remoteItems; // ivar: _remoteItems
@property (readonly) Class superclass;


+(id)groupWithTitle:(id)arg0 icon:(NSInteger)arg1 items:(id)arg2 ;
-(BOOL)isRemoteItemCollection;
-(NSInteger)remoteItemIcon;
-(id)_init;


@end


#endif