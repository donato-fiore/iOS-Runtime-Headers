// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDYNAMICASSETINDEX_H
#define PKDYNAMICASSETINDEX_H

@class NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface PKDynamicAssetIndex : NSObject {
    NSDictionary *_index;
}


@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated


-(id)description;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)mappedAssetIdentifier:(id)arg0 ;
-(id)mappedStringIdentifier:(id)arg0 ;


@end


#endif