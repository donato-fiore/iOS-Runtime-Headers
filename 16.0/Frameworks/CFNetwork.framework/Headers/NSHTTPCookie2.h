// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSHTTPCOOKIE2_H
#define NSHTTPCOOKIE2_H

@class NSString, NSDate;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NSHTTPCookie2 : NSObject <NSCopying, NSMutableCopying>

 {
    NSString *_etldPlusOne;
    NSUInteger _sCreationDate;
    NSUInteger _sExpirationDate;
    NSUInteger _sLastAccessTime;
    BOOL _session;
}


@property (readonly) NSDate *creationDate; // ivar: creationDate
@property (readonly) NSString *domain; // ivar: _domain
@property (readonly) NSDate *expirationDate;
@property (readonly) BOOL hostOnly; // ivar: _hostOnly
@property (readonly) BOOL httpOnly; // ivar: _httpOnly
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *partition; // ivar: _partition
@property (readonly) NSString *path; // ivar: _path
@property (readonly) NSInteger sameSite; // ivar: _sameSite
@property (readonly) BOOL secure; // ivar: _secure
@property (readonly) BOOL sesion; // ivar: _sesion
@property (readonly) NSInteger source; // ivar: _source
@property (readonly) NSString *value; // ivar: _value


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 value:(id)arg1 domain:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif