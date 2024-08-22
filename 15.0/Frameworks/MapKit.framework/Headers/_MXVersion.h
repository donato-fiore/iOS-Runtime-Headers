// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXVERSION_H
#define _MXVERSION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _MXVersion : NSObject

@property (readonly, nonatomic) NSArray *components; // ivar: _components


-(NSInteger)compare:(id)arg0 ;
-(id)init;
-(id)initWithComponents:(id)arg0 ;
-(id)initWithVersionString:(id)arg0 ;


@end


#endif