// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDKNOSISALIAS_H
#define GDKNOSISALIAS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDKnosisAlias : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *primary; // ivar: _primary


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif