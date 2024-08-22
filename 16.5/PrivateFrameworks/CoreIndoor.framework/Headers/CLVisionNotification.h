// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLVISIONNOTIFICATION_H
#define CLVISIONNOTIFICATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLVisionNotification : NSObject <NSSecureCoding>

 {
    basic_string<char, std::char_traits<char>, std::allocator<char>> _serializedVIOEstimation;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _serializedVLLocalizationResult;
}


@property (readonly, nonatomic) NSUInteger arSessionState; // ivar: _arSessionState
@property (readonly, nonatomic) int notificationType; // ivar: _notificationType
@property ? serializedVIOEstimation;
@property ? serializedVLLocalizationResult;


-(id)initWithARSessionState:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedVIOEstimation:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 ;
-(id)initWithSerializedVLLocalizationResult:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif