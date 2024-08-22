// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASASSETCOLLECTIONCHANGE_H
#define MSASASSETCOLLECTIONCHANGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSASAssetCollectionChange : NSObject

@property (retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSString *ctag; // ivar: _ctag
@property (nonatomic) BOOL wasDeleted; // ivar: _wasDeleted


-(id)description;


@end


#endif