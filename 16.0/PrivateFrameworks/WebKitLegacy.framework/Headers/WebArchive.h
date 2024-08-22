// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBARCHIVE_H
#define WEBARCHIVE_H

@class NSData, NSArray;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WebArchivePrivate.h"
#import "WebResource.h"

@interface WebArchive : NSObject <NSCoding, NSCopying>

 {
    WebArchivePrivate *_private;
}


@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) WebResource *mainResource;
@property (readonly, copy, nonatomic) NSArray *subframeArchives;
@property (readonly, copy, nonatomic) NSArray *subresources;


-(*void)_coreLegacyWebArchive;
-(id)_initWithCoreLegacyWebArchive:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMainResource:(id)arg0 subresources:(id)arg1 subframeArchives:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif