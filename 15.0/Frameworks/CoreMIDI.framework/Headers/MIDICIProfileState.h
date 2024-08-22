// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIDICIPROFILESTATE_H
#define MIDICIPROFILESTATE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MIDICIProfileState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *disabledProfiles; // ivar: disabledProfiles
@property (readonly, nonatomic) NSArray *enabledProfiles; // ivar: enabledProfiles
@property (readonly, nonatomic) unsigned char midiChannel; // ivar: midiChannel


+(BOOL)supportsSecureCoding;
+(id)description;
-(id)bytesWithChannel:(unsigned char)arg0 ;
-(id)description;
-(id)initWithChannel:(unsigned char)arg0 enabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabledProfiles:(id)arg0 disabledProfiles:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithEnabledProfiles:(id)arg0 disabledProfiles:(id)arg1 ;


@end


#endif