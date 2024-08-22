// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENWEBARCHIVE_H
#define ENWEBARCHIVE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ENWebResource.h"

@interface ENWebArchive : NSObject

@property (retain, nonatomic) ENWebResource *mainResource; // ivar: _mainResource
@property (retain, nonatomic) NSArray *subframeArchives; // ivar: _subframeArchives
@property (retain, nonatomic) NSArray *subresources; // ivar: _subresources


+(id)webArchiveWithData:(id)arg0 ;
+(id)webArchiveWithDictionary:(id)arg0 ;
-(id)data;
-(id)initWithMainResource:(id)arg0 subresources:(id)arg1 subframeArchives:(id)arg2 ;
-(id)propertyList;


@end


#endif