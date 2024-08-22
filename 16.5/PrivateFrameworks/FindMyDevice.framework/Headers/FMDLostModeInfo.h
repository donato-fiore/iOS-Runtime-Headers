// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDLOSTMODEINFO_H
#define FMDLOSTMODEINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDLostModeInfo : NSObject <NSSecureCoding>



@property (nonatomic) BOOL disableSlideToUnlock; // ivar: _disableSlideToUnlock
@property (nonatomic) BOOL facetimeCapable; // ivar: _facetimeCapable
@property (retain, nonatomic) NSString *footnoteText; // ivar: _footnoteText
@property (nonatomic) BOOL lostModeEnabled; // ivar: _lostModeEnabled
@property (nonatomic) NSUInteger lostModeType; // ivar: _lostModeType
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif