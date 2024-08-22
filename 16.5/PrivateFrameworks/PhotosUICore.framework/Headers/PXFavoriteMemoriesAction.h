// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFAVORITEMEMORIESACTION_H
#define PXFAVORITEMEMORIESACTION_H

@class NSString;


#import "PXMemoriesAction.h"

@interface PXFavoriteMemoriesAction : PXMemoriesAction {
    NSString *_localizedActionName;
    NSString *_actionSystemImageName;
}


@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite


+(BOOL)currentValueForMemories:(id)arg0 ;
+(BOOL)toggledValueForMemories:(id)arg0 ;
-(id)actionIdentifier;
-(id)actionSystemImageName;
-(id)initWithMemories:(id)arg0 ;
-(id)initWithMemories:(id)arg0 favorite:(BOOL)arg1 ;
-(id)localizedActionName;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif