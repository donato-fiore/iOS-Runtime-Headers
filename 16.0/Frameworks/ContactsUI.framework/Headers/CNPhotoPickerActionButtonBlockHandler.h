// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKERACTIONBUTTONBLOCKHANDLER_H
#define CNPHOTOPICKERACTIONBUTTONBLOCKHANDLER_H


#import <Foundation/Foundation.h>


@interface CNPhotoPickerActionButtonBlockHandler : NSObject

@property (readonly, copy, nonatomic) id *actionBlock; // ivar: _actionBlock


-(id)initWithActionBlock:(id)arg0 ;
-(void)performAction;


@end


#endif