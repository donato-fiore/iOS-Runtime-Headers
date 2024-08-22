// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWDATASTORE_H
#define SWDATASTORE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SWDatastore : NSObject

@property (readonly, copy, nonatomic) NSString *JSONString; // ivar: _JSONString


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithJSONString:(id)arg0 ;


@end


#endif