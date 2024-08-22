// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPRESULTSTRUCTUREDDATANODE_H
#define UPRESULTSTRUCTUREDDATANODE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface UPResultStructuredDataNode : NSObject

@property (readonly, copy) NSArray *children; // ivar: _children
@property (readonly, copy) NSString *type; // ivar: _type
@property (readonly, copy) NSString *value; // ivar: _value


-(id)_dictionaryRepresentation;
-(id)initWithType:(id)arg0 andValue:(id)arg1 andChildren:(id)arg2 ;


@end


#endif