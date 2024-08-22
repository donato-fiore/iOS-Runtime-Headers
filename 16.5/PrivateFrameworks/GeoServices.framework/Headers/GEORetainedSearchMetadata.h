// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORETAINEDSEARCHMETADATA_H
#define GEORETAINEDSEARCHMETADATA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GEOPDRetainedSearchMetadata.h"

@interface GEORetainedSearchMetadata : NSObject <NSCopying>

 {
    GEOPDRetainedSearchMetadata *_retainedSearchMetadata;
}


@property (readonly, nonatomic, getter=_query) NSString *query;


-(id)_retainedSearchMetadata;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRetainedSearchMetadata:(id)arg0 ;


@end


#endif