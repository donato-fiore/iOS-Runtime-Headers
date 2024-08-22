// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLIBRARYITEMMETADATA_H
#define SHLIBRARYITEMMETADATA_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SHLibraryItemMetadata : NSObject <NSCopying>



@property (readonly, nonatomic) NSData *encodedSystemData; // ivar: _encodedSystemData


-(BOOL)validEncodedSystemData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEncodedSystemData:(id)arg0 ;


@end


#endif