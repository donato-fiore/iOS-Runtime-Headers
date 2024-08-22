// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUROUTINGSUBTITLECONTROLLER_H
#define MRUROUTINGSUBTITLECONTROLLER_H

@class UIImage, NSMutableDictionary, NSString;
@protocol MRURoutingSubtitleControllerDelegate;

#import <Foundation/Foundation.h>


@interface MRURoutingSubtitleController : NSObject

@property (readonly, nonatomic) NSInteger accessory;
@property (readonly, nonatomic) BOOL canTransitionToNextState;
@property (weak, nonatomic) NSObject<MRURoutingSubtitleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasText;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSMutableDictionary *storage; // ivar: _storage
@property (readonly, copy, nonatomic) NSString *text;


-(NSInteger)nextAvailableTextState;
-(id)description;
-(id)init;
-(void)prepareForReuse;
-(void)transitionToNextAvailableState;


@end


#endif