// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSDATACACHE_H
#define TPSDATACACHE_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TPSDataCache : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger cacheType; // ivar: _cacheType
@property (readonly, nonatomic) BOOL expired;
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *lastModified; // ivar: _lastModified
@property (nonatomic) NSInteger maxAge; // ivar: _maxAge
@property (retain, nonatomic) NSDate *updatedDate; // ivar: _updatedDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif