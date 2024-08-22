// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCARRIERSPACEAPPSINFO_H
#define CTCARRIERSPACEAPPSINFO_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceAppsInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *appsList; // ivar: _appsList
@property (retain, nonatomic) NSString *appsURL; // ivar: _appsURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif