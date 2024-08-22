// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAEGRANTEDDELEGATE_H
#define DAEGRANTEDDELEGATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAEGrantedDelegate : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSInteger permission; // ivar: _permission
@property (copy, nonatomic) NSString *preferredUserAddress; // ivar: _preferredUserAddress
@property (copy, nonatomic) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif