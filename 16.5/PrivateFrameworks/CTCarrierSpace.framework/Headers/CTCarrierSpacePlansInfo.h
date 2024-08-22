// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCARRIERSPACEPLANSINFO_H
#define CTCARRIERSPACEPLANSINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpacePlansInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *morePlansURL; // ivar: _morePlansURL
@property (retain, nonatomic) NSArray *planGroupsList; // ivar: _planGroupsList


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif