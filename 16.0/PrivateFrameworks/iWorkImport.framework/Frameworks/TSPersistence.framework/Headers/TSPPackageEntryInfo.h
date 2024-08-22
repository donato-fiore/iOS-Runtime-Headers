// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPPACKAGEENTRYINFO_H
#define TSPPACKAGEENTRYINFO_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TSPPackageEntryInfo : NSObject

@property (readonly, nonatomic) unsigned int CRC; // ivar: _CRC
@property (readonly, nonatomic) NSUInteger encodedLength; // ivar: _encodedLength
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate


-(id)init;
-(id)initWithEncodedLength:(NSUInteger)arg0 lastModificationDate:(id)arg1 CRC:(unsigned int)arg2 ;


@end


#endif