// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSUSERGUIDE_H
#define TPSUSERGUIDE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TPSGradient.h"

@interface TPSUserGuide : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) TPSGradient *gradient; // ivar: _gradient
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *symbol; // ivar: _symbol
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 version:(id)arg1 text:(id)arg2 symbol:(id)arg3 gradientColorStrings:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif