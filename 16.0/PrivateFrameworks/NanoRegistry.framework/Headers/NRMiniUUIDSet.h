// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRMINIUUIDSET_H
#define NRMINIUUIDSET_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding>

 {
    vector<unsigned int, std::allocator<unsigned int> > _miniUUIDs;
}


@property (retain, nonatomic) NSData *data; // ivar: _data


+(BOOL)supportsSecureCoding;
-(BOOL)hasUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithUUIDSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif