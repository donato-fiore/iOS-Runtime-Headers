// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSWEETGUMPLANSINFO_H
#define CTSWEETGUMPLANSINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSweetgumPlansInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *morePlansURL; // ivar: _morePlansURL
@property (retain, nonatomic) NSArray *planGroups; // ivar: _planGroups


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif