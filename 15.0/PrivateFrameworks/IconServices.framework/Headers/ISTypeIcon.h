// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISTYPEICON_H
#define ISTYPEICON_H

@class NSString;


#import "ISBindableIcon.h"

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)_fallbackKey;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)makeResourceProvider;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif