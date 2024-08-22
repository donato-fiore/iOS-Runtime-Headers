// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BIOMETRICKITENROLLPROGRESSINFO_H
#define BIOMETRICKITENROLLPROGRESSINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BiometricKitEnrollProgressInfo : NSObject

@property (retain, nonatomic) NSDictionary *captureImage; // ivar: _captureImage
@property (nonatomic) NSInteger currentPrimaryComponentID; // ivar: _currentPrimaryComponentID
@property (nonatomic) int message; // ivar: _message
@property (retain, nonatomic) NSDictionary *messageDetails; // ivar: _messageDetails
@property (nonatomic) NSInteger progress; // ivar: _progress
@property (retain, nonatomic) NSDictionary *renderedImage; // ivar: _renderedImage


-(id)init;
-(void)dealloc;


@end


#endif