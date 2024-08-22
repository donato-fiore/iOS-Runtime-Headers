// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDCONTEXTUALKEYPATHANDVALUE_H
#define _CDCONTEXTUALKEYPATHANDVALUE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CDContextualKeyPath.h"
#import "_CDContextValue.h"

@interface _CDContextualKeyPathAndValue : NSObject <NSSecureCoding>



@property (retain, nonatomic) _CDContextualKeyPath *keyPath; // ivar: _keyPath
@property (retain, nonatomic) _CDContextValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 andValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif