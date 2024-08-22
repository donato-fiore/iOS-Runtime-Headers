// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCNAMEDDATA_H
#define TCNAMEDDATA_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface TCNamedData : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: mData
@property (readonly, nonatomic) NSString *name; // ivar: mName


+(id)namedDataWithData:(id)arg0 named:(id)arg1 ;
-(id)initWithData:(id)arg0 named:(id)arg1 ;


@end


#endif