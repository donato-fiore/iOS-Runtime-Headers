// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODBWRITEENTRY_H
#define GEODBWRITEENTRY_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface GEODBWriteEntry : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) unsigned int edition; // ivar: _edition
@property (readonly, nonatomic) NSString *etag; // ivar: _etag
@property (readonly, nonatomic) _GEOTileKey key; // ivar: _key
@property (readonly, nonatomic) unsigned int provider; // ivar: _provider
@property (readonly, nonatomic) unsigned int set; // ivar: _set


-(id)initWithKey:(struct _GEOTileKey )arg0 data:(id)arg1 edition:(unsigned int)arg2 set:(unsigned int)arg3 provider:(unsigned int)arg4 etag:(id)arg5 ;


@end


#endif