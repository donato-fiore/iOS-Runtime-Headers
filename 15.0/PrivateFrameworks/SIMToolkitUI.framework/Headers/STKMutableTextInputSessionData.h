// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKMUTABLETEXTINPUTSESSIONDATA_H
#define STKMUTABLETEXTINPUTSESSIONDATA_H

@class NSString;


#import "STKTextInputSessionData.h"

@interface STKMutableTextInputSessionData : STKTextInputSessionData

@property (copy, nonatomic) NSString *defaultText;
@property (nonatomic) BOOL isDigitsOnly;
@property (nonatomic) BOOL isSecure;
@property (nonatomic) NSUInteger maximumInputLength;
@property (nonatomic) NSUInteger minimumInputLength;




@end


#endif