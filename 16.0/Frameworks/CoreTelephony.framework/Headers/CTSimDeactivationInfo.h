// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTSIMDEACTIVATIONINFO_H
#define CTSIMDEACTIVATIONINFO_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSimDeactivationInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (retain, nonatomic) NSString *homePlmn; // ivar: _homePlmn


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif