// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCOMPLICATIONSET_H
#define ATXCOMPLICATIONSET_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXComplicationSet : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *complications; // ivar: _complications
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComplications:(id)arg0 ;
-(id)initWithComplications:(id)arg0 localizedTitle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif