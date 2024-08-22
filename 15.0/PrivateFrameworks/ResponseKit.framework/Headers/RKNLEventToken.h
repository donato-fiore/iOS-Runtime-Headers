// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKNLEVENTTOKEN_H
#define RKNLEVENTTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RKNLEventToken : NSObject

@property NSInteger length; // ivar: _length
@property NSInteger location; // ivar: _location
@property (retain) NSString *string; // ivar: _string
@property unsigned int tokenID; // ivar: _tokenID


-(id)initWithString:(id)arg0 location:(NSInteger)arg1 length:(NSInteger)arg2 ;


@end


#endif