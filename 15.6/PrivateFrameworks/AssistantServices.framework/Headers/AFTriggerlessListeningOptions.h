// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFTRIGGERLESSLISTENINGOPTIONS_H
#define AFTRIGGERLESSLISTENINGOPTIONS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AFTriggerlessListeningOptions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL beepBeforeListening;
@property (readonly, nonatomic) CGFloat delay;
@property (readonly, nonatomic) CGFloat endpointDelay; // ivar: _endpointDelay
@property (nonatomic) BOOL playAlertBeforeListening; // ivar: _playAlertBeforeListening
@property (readonly, nonatomic) BOOL showUIBeforeListening;
@property (nonatomic) BOOL showUIDuringListening; // ivar: _showUIDuringListening


+(BOOL)supportsSecureCoding;
-(id)_initWithShowUIDuringListening:(BOOL)arg0 playAlertBeforeListening:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif