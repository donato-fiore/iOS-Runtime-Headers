// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUAUDIOUNITPRESET_H
#define AUAUDIOUNITPRESET_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AUAudioUnitPreset : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger number; // ivar: _number


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif