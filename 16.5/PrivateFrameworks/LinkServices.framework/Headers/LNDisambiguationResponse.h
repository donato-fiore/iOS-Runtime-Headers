// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNDISAMBIGUATIONRESPONSE_H
#define LNDISAMBIGUATIONRESPONSE_H

@class NSUUID, NSNumber, LNValue;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNDisambiguationResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *selectedIndex; // ivar: _selectedIndex
@property (readonly, nonatomic) LNValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 selectedIndex:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif