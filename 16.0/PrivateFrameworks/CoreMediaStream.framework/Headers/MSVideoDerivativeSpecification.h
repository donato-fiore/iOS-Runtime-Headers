// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVIDEODERIVATIVESPECIFICATION_H
#define MSVIDEODERIVATIVESPECIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSVideoDerivativeSpecification : NSObject

@property (readonly, nonatomic) CGFloat bitRate; // ivar: _bitRate
@property (readonly, nonatomic) NSUInteger mediaAssetType; // ivar: _mediaAssetType
@property (readonly, nonatomic) BOOL powerRequired; // ivar: _powerRequired
@property (readonly, nonatomic) BOOL useCellular; // ivar: _useCellular
@property (readonly, nonatomic) NSString *videoType; // ivar: _videoType


+(id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif