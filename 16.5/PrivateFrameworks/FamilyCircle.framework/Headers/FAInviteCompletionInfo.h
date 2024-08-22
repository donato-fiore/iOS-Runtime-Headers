// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAINVITECOMPLETIONINFO_H
#define FAINVITECOMPLETIONINFO_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FAInviteCompletionInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSUInteger transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
-(NSUInteger)completionTypeFrom:(id)arg0 ;
-(NSUInteger)transportTypeFrom:(id)arg0 ;
-(id)_completionStatusStringValue;
-(id)_transportStringValue;
-(id)initWithCoder:(id)arg0 ;
-(id)serverReadableDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif