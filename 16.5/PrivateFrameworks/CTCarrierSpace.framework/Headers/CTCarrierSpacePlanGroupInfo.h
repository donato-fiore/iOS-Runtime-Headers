// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCARRIERSPACEPLANGROUPINFO_H
#define CTCARRIERSPACEPLANGROUPINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *groupId; // ivar: _groupId
@property (retain, nonatomic) NSArray *groupOptionsList; // ivar: _groupOptionsList
@property (nonatomic) NSInteger planCategory; // ivar: _planCategory


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif