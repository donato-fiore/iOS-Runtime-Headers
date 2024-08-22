// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAMANAGEDACMPARAMETER_H
#define LAMANAGEDACMPARAMETER_H

@class NSString, NSMutableData;

#import <Foundation/Foundation.h>


@interface LAManagedACMParameter : NSObject {
    NSString *_description;
}


@property (readonly, nonatomic) *? acmParameter; // ivar: _acmParameter
@property (readonly, nonatomic) NSMutableData *data; // ivar: _data


+(id)acmParameterWithTimeOffset:(unsigned int)arg0 ;
+(id)acmParameterWithUserId:(unsigned int)arg0 ;
-(id)description;
-(id)initWithACMParamType:(unsigned int)arg0 bytes:(*void)arg1 length:(NSUInteger)arg2 description:(id)arg3 ;


@end


#endif