// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPRIVATELISTENINGSTATESTATICSOURCE_H
#define _MPCPRIVATELISTENINGSTATESTATICSOURCE_H

@class NSNumber;


#import "MPCPrivateListeningStateSource.h"

@interface _MPCPrivateListeningStateStaticSource : MPCPrivateListeningStateSource {
    NSNumber *_value;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)sourceType;
-(id)_initWithValue:(id)arg0 ;
-(id)currentValue;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif