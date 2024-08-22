// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMFIELDVALUE_H
#define KMFIELDVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface KMFieldValue : NSObject

@property (readonly, nonatomic) NSInteger fieldType; // ivar: _fieldType
@property (readonly, nonatomic) NSString *value; // ivar: _value


-(id)initWithFieldType:(NSInteger)arg0 value:(id)arg1 ;


@end


#endif