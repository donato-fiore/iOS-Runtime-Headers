// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIQUERYCONTEXTCATALOGIDSMAPPER_H
#define VIQUERYCONTEXTCATALOGIDSMAPPER_H

@class NSString;
@protocol VIQueryContextMapping;

#import <Foundation/Foundation.h>


@interface VIQueryContextCatalogIDsMapper : NSObject <VIQueryContextMapping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)updateBuilder:(id)arg0 withDictionary:(id)arg1 ;


@end


#endif