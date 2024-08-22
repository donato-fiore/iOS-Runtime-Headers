// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPITEMMETADATA_H
#define MKMAPITEMMETADATA_H

@class GEOBusiness, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MKMapItemMetadata : NSObject

@property (readonly, nonatomic) GEOBusiness *business; // ivar: _business
@property (retain, nonatomic) NSMutableDictionary *imageCache; // ivar: _imageCache


-(id)description;
-(id)imageForURL:(id)arg0 ;
-(id)initWithBusiness:(id)arg0 ;
-(void)addImage:(id)arg0 forURL:(id)arg1 ;


@end


#endif