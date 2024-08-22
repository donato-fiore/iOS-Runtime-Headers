// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHOBJECTPLACEHOLDER_H
#define PHOBJECTPLACEHOLDER_H

@class NSString;


#import "PHObject.h"

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
}


@property NSInteger assetMediaType; // ivar: _assetMediaType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLocalIdentifier:(id)arg0 ;
-(id)localIdentifier;


@end


#endif