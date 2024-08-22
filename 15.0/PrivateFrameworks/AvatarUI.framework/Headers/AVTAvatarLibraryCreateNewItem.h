// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARLIBRARYCREATENEWITEM_H
#define AVTAVATARLIBRARYCREATENEWITEM_H

@class NSString;
@protocol AVTAvatarLibraryItem;

#import <Foundation/Foundation.h>


@interface AVTAvatarLibraryCreateNewItem : NSObject <AVTAvatarLibraryItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cellIdentifier;
-(void)configureCell:(id)arg0 imageProvider:(id)arg1 ;


@end


#endif