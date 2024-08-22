// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKTEXTINPUTSESSIONDATA_H
#define STKTEXTINPUTSESSIONDATA_H

@class NSString;


#import "STKTextSessionData.h"

@interface STKTextInputSessionData : STKTextSessionData

@property (readonly, copy, nonatomic) NSString *defaultText; // ivar: _defaultText
@property (readonly, nonatomic) BOOL isDigitsOnly; // ivar: _isDigitsOnly
@property (readonly, nonatomic) BOOL isSecure; // ivar: _isSecure
@property (readonly, nonatomic) NSUInteger maximumInputLength; // ivar: _maximumInputLength
@property (readonly, nonatomic) NSUInteger minimumInputLength; // ivar: _minimumInputLength


-(id)initWithText:(id)arg0 simLabel:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif