// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRMONOGRAMMER_H
#define HRMONOGRAMMER_H

@class CNAvatarImageRenderer;

#import <Foundation/Foundation.h>


@interface HRMonogrammer : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // ivar: _avatarRenderer
@property (nonatomic) CGSize monogramSize; // ivar: _monogramSize


-(id)_defaultScopeForMonogram;
-(id)initWithDiameter:(CGFloat)arg0 ;
-(id)makeImageForTitle:(id)arg0 ;
-(id)monogramForFirstWordFromText:(id)arg0 ;


@end


#endif