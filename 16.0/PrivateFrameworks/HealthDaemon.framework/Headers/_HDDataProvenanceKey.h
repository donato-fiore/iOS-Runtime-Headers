// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDDATAPROVENANCEKEY_H
#define _HDDATAPROVENANCEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDDataOriginProvenance.h"

@interface _HDDataProvenanceKey : NSObject <NSCopying>

 {
    NSUInteger _hash;
    HDDataOriginProvenance *_dataProvenance;
    NSString *_localProductType;
    NSString *_localSystemBuild;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif