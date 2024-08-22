// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXHEARINGAIDMODE_H
#define AXHEARINGAIDMODE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXHearingAidMode : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger category; // ivar: _category
@property (nonatomic) int ear; // ivar: _ear
@property (nonatomic) unsigned char index; // ivar: _index
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int syncAttempts; // ivar: syncAttempts


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMixingStream;
-(BOOL)isStream;
-(BOOL)isStreamOrMixingStream;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRepresentation:(id)arg0 ;
-(id)transportRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif