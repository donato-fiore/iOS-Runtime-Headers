// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVNIMAGEPRINTWRAPPER_H
#define VCPVNIMAGEPRINTWRAPPER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface VCPVNImageprintWrapper : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) int version; // ivar: _version


+(id)generateVNImageprintWithType:(NSUInteger)arg0 archiveData:(id)arg1 andError:(*id)arg2 ;
+(id)wrapperWithImageprintType:(NSUInteger)arg0 version:(int)arg1 andData:(id)arg2 ;
-(BOOL)calculateDistance:(*float)arg0 toWrapper:(id)arg1 andError:(*id)arg2 ;
-(id)description;
-(id)initWithImageprintType:(NSUInteger)arg0 version:(int)arg1 andData:(id)arg2 ;


@end


#endif