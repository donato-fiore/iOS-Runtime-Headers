// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDSECURELOCATIONCONTEXT_H
#define FMDSECURELOCATIONCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDSecureLocationContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *findMyId; // ivar: _findMyId
@property (copy, nonatomic) NSString *mode; // ivar: _mode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif